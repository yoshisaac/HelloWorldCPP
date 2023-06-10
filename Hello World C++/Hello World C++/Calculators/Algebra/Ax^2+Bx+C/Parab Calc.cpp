#include <iostream>
#include <conio.h>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\..\Headers\Calc.h" // Seems like you also forgot to update this file :shrug: ~ Omega
#include "..\..\Headers\Select.h"

using namespace std;

void ParabCalc()
{
    char CalcQuit;
    double A, B, C, AxisOfSym, answr;
    string MinMax;

    LastCalc = "Parab Calculator";

    /* Ok here is the addition calculator */
    while (true)
    {
        system("CLS");
        /* Tittle */
        cout << '\n' << "\tParabula Formula" << '\n';
        cout << "\t  -B/(2*A) = x" << '\n';
        cout << "\t  y = Ax^2+Bx+C" << "\n\n\n";

        /* User input */
        cout << "A value: ";
        cin >> A;

        cout << '\n';

        cout << "B value: ";
        cin >> B;

        cout << '\n';
        
        cout << "C value: ";
        cin >> C;

        /* If anything breaks in the iostream then retry */
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            ParabCalc();
        }

        cout << '\n';

        AxisOfSym = -B / (2 * A);
        if (abs(AxisOfSym) == 0)
        {
            AxisOfSym = 0;
        }
        cout << "Axis Of Symetry: -" << B << "/(2*" << A << ") = " << AxisOfSym << " = x" << '\n';

        answr = A * (AxisOfSym * AxisOfSym) + B * AxisOfSym + C;
        cout << "Vertex: " << A << "*X^2 + " << B << "*X + " << C << " = " << AxisOfSym << "," << answr << '\n';

        cout << "Y-intercept: 0," << C << '\n';
        
        if (answr < C)
        {
            MinMax = "Min";
        }
        else if (answr > C)
        {
            MinMax = "Max";
        }
        cout << "min/max: " << MinMax << "  " << answr << '\n';

        cout << "Range: " << answr << " - infinity" << "\n\n";
        Sleep(2000);

        cout << "Exit? Y or N" << endl;
        cout << "Or type \"Q\" to close the application" << "\n\n";
        cin >> CalcQuit;

        /* Be really sure they didn't break anything */
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            Calc();
        }

        /* Selection of where to go next */
        switch (tolower(CalcQuit))
        {
        case 'y':
            SelectScreen(); // Different scope who dis? ~ Omega
            break;
        case 'n':
            break;
        case 'q':
            CalcQuitY();
            break;
        default:
            SelectScreen();
            break;
        }
    }
}
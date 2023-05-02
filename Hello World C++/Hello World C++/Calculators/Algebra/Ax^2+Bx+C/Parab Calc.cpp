#include <iostream>
#include <conio.h>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\..\Headers\Calc.h"
#include "..\..\Headers\Select.h"

using namespace std;

void ParabCalc()
{
    char CalcQuit;
    double A, B, C, AxisOfSym, answr;

    LastCalc = "Parab Calculator";

    /* Ok here is the addition calculator */
    while (true)
    {
        system("CLS");
        /* Tittle */
        cout << endl << "\tParabula Formula" << endl << "\t  -B/(2*A) = x" << endl << "\t  y = Ax^2+Bx+C" << endl << endl << endl;

        /* User input */
        cout << "A value: ";
        cin >> A;

        cout << endl;

        cout << "B value: ";
        cin >> B;

        cout << endl;
        
        cout << "C value: ";
        cin >> C;

        /* If anything breaks in the iostream then retry */
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            ParabCalc();
        }
       
        cout << endl;

        AxisOfSym = -B / (2 * A);
        answr = A * (AxisOfSym * AxisOfSym) + B * AxisOfSym + C;

        cout << "Axis Of Symetry: -" << B << "/" << "(" << "2" << "*" << A << ")" << " = " << AxisOfSym << " = x" << endl;

        cout << "Vertex: " << A << "*X^2" << " + " << B << "*X + " << C << " = " << AxisOfSym << "," << answr << endl;

        cout << "Y-intercept: " << C << endl << endl;
        Sleep(2000);

        cout << "Exit? Y or N" << endl;
        cout << "Or type \"Q\" to close the application" << endl << endl;
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
            SelectScreen();
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

        system("CLS");
    }
}
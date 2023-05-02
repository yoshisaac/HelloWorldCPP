#include <iostream>
#include <conio.h>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include <cmath>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void AsqrBsqrCalc()
{
    char CalcQuit;
    double fst, scnd, answr;

    LastCalc = "Pathagorean";

    /* Pathagorean but shows the square root answer */
    while (true)
    {
        system("CLS");
        /* Tittle */
        cout << endl << "\tPathagorean's Theorum" << endl << "\t   A^2 + B^2 = C^2" << endl << endl << endl << endl << endl;

        /* User input */
        cout << "A value: ";
        cin >> fst;

        cout << "B value: ";
        cin >> scnd;

        cout << endl;

        /* If anything breaks in the iostream then retry */
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            Calc();
        }

        cout << endl << endl << endl << endl;

        answr = fst * fst + scnd * scnd;
        cout << "\t\t" << fst << "^2" << " + " << scnd << "^2" << " = " << sqrt(fst * fst + scnd * scnd) << "^2" << " = " << answr << endl;
        Sleep(2000);

        cout << "Exit? Y or N" << endl;
        cout << "Or type \"Q\" to close the application\n" << endl;
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
            GeometrySelectionScreen();
            break;
        case 'n':
            break;
        case 'q':
            CalcQuitY();
        default:
            GeometrySelectionScreen();
            break;
        }
        system("CLS");
    }
    return;
}
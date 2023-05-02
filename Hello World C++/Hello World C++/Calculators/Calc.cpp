#include <iostream>
#include <conio.h>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void CalcQuitY()
{
    cout << "Quitting..." << endl;
    Sleep(1000);
    exit(0);
}

void Calc()
{
    char CalcQuit;
    double fst, scnd, answr;
    char op;

    LastCalc = "Calculator";

    /* Ok here is the addition calculator */
    while (true)
    {
        system("CLS");
        /* Tittle */
        cout << endl << "\tCalculator - Usage: # operator another #" << endl;
        cout << endl << "\tExamples: 1+1, 2*2, 10-2, 9/3" << endl << endl << endl << endl;

        /* User input */
        cin >> fst >> op >> scnd;

        cout << endl;

        /* If anything breaks in the iostream then retry */
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            Calc();
        }

        /* Know which operator to use */
        /* operators aren't an int, char, string, double, or a float. */
        /* so this is the most compact form of doing this */
        switch (op)
        {
        case '+':
            answr = fst + scnd;
            break;
        case '-':
            answr = fst - scnd;
            break;
        case '/':
            answr = fst / scnd;
            break;
        case '*':
            answr = fst * scnd;
            break;
        case '=':
            answr = fst == scnd;
            break;
        default:
            cout << "Invalid Operator: " << op;
            op = 'i'; // i for invalid
            break;
        }

        cout << endl << endl << endl << endl;

        if (op == 'i')
        {
            cout << "A invalid operator was used" << endl;
        }
        else
        {
            cout << "\t\t" << fst << op << scnd << " = " << answr << endl;
        }
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
    return;
}
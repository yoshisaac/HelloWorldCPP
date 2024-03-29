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
    Sleep(500);
    exit(0);
}

void Calc()
{
    char CalcQuit;
    double fst, scnd, answr;
    int fstINT, scndINT;
    char op;

    LastCalc = "Calculator";

    /* Ok here is the addition calculator */
    while (true)
    {
        system("CLS");
        /* Tittle */
        cout << '\n' << "\tCalculator - Usage: # operator another #" << '\n';
        cout << '\n' << "\tExamples: 1+1, 2*2, 10-2, 9/3, 10%3, 5=5" << "\n\n\n\n";

        /* User input */
        cin >> fst >> op >> scnd;

        cout << '\n';

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
        case '*':
            answr = fst * scnd;
            break;
        case '/':
            answr = fst / scnd;
            break;
        case '%':
            //Type cast the doubles to integers because
            //the modulo operator only supports integers in c++
            fstINT = int(fst);
            scndINT = int(scnd);
            answr = fstINT % scndINT;
            break;
        case '=':
            answr = fst == scnd;
            break;
        default:
            cout << "Invalid Operator: " << op;
            op = 'i'; // i for invalid
            break;
        }

        cout << "\n\n\n\n";

        if (op == 'i')
        {
            cout << "A invalid operator was used" << '\n';
        }
        else
        {
            cout << "\t\t" << fst << op << scnd << " = " << answr << '\n';
        }
        Sleep(2000);

        cout << "Exit? Y or N" << '\n';
        cout << "Or type \"Q\" to close the application" << "\n";
        cin >> CalcQuit;

        /* Be really sure they didn't break anything */
        if (cin.fail())
        {
            cin.clear();
            cin.ignore();
            Calc();
        }

        /* Selection of where to go next */
        switch (tolower(CalcQuit)) // Nice ~ Omega
        {
        case 'y':
            SelectScreen();
            break;
        case 'n':
            //nothing needs to be here
            //we are in a while loop
            //just break out of the switch statement
            break;
        case 'q':
            CalcQuitY();
            break;
        default:
            SelectScreen();
            break;
        }
    }
    return;
}
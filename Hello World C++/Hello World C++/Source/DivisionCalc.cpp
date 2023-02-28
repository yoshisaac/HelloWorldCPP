#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void DivisionCalc()
{
    string CalcQuit;
    double fst, scnd;

    DivisionActiv = 1;
    LastCalc = "Division";

    /* Ok here is the division calculator */
    while (DivisionActiv == 1)
    {
        system("CLS");
        cout << "\n\tThis is the c++ two value multiplication calculator\n\n\n\n" << flush << endl;


        cout << "value one: ";
        cin >> fst;

        cout << endl;

        cout << "value two: ";
        cin >> scnd;

        cout << "\n\n\n" << endl;

        cout << "\t\tYour answer is: " << fst / scnd << endl;
        
        Sleep(1000);
        cout << "Exit? Y or N" << endl;
        cout << "Or type 'quit' to close the application\n" << endl;
        cin >> CalcQuit;

        if (CalcQuit == "Y" || CalcQuit == "y")
        {
            DivisionActiv = 0;
            SelectScreen();
        }
        else if (CalcQuit == "quit" || CalcQuit == "Quit")
        {
            CalcQuitY();
        }
        else
        {
            DivisionActiv = 0;
            SelectScreen();
        }
        system("CLS");
    }
    return;
}
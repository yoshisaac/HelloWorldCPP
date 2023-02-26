#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void CalcQuitY();

void AdditionCalc()
{
    string CalcQuit;
    double fst, scnd;
    double answr;

    AdditionActiv = 1;
    LastCalc = "Addition";

    /* Ok here is the addition calculator */
    while (AdditionActiv == 1)
    {
        system("CLS");
        cout << "\n\tThis is the c++ two value addition calculator\n\n\n\n" << flush << endl;


        cout << "value one: ";
        cin >> fst;

        cout << endl;

        cout << "value two: ";
        cin >> scnd;

        cout << "\n\n\n" << endl;

        answr = fst + scnd;
        cout << "\t\tYour answer is: " << answr << endl;
        Sleep(1);

        cout << "Exit? Y or N" << endl;
        cout << "Or type 'quit' to close the application\n" << endl;
        cin >> CalcQuit;

        if (CalcQuit == "Y")
        {
            AdditionActiv = 0;
            SelectScreen();
        }
        else if (CalcQuit == "y")
        {
            AdditionActiv = 0;
            SelectScreen();
        }
        else if (CalcQuit == "quit")
        {
            CalcQuitY();
        }
        else if (CalcQuit == "Quit")
        {
            CalcQuitY();
        }
        else
        {
            AdditionActiv = 0;
            SelectScreen();
        }

        system("CLS");
    }
    return;
}
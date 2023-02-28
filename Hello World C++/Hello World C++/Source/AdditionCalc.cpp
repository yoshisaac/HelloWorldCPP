#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void CalcQuitY()
{
    cout << "Quitting...";
    Sleep(1500);
    exit(0);
}

void AdditionCalc()
{
    string CalcQuit;
    double fst, scnd;

	AdditionActiv = 1;
    LastCalc = "Addition";

    /* Ok here is the addition calculator */
	while (AdditionActiv)
    {
        system("CLS");
        cout << "\n\tThis is the c++ two value addition calculator\n\n\n\n" << endl;

        cout << "value one: ";
        cin >> fst;

        cout << endl;

        cout << "value two: ";
        cin >> scnd;

        cout << "\n\n\n" << endl;

        cout << "\t\tYour answer is: " << fst + scnd << endl;
        Sleep(2000);

        cout << "Exit? Y or N" << endl;
        cout << "Or type 'quit' to close the application\n" << endl;
        cin >> CalcQuit;


        if (CalcQuit == "Y" || CalcQuit == "y")
        {
            AdditionActiv = 0;
            SelectScreen();
        }
        else if (CalcQuit == "quit" || CalcQuit == "Quit")
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
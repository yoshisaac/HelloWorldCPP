#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void CalcQuitY();

void MultiplicationCalc()
{
    string CalcQuit;
    double fst, scnd;
    double answr;

    MultiplicationActiv = 1;
    LastCalc = "Multiplication";

    /* Ok here is the multiplication calculator */
    while (MultiplicationActiv == 1)
    {
        system("CLS");
        cout << "\n\tThis is the c++ two value multiplication calculator\n\n\n\n" << flush << endl;


        cout << "value one: ";
        cin >> fst;

        cout << endl;

        cout << "value two: ";
        cin >> scnd;

        cout << "\n\n\n" << endl;

		// Same as in division calculator this could be on one line ~ Omega
        answr = fst * scnd;
        cout << "\t\tYour answer is: " << answr << endl;
        
        Sleep(1);
        cout << "Exit? Y or N" << endl;
        cout << "Or type 'quit' to close the application\n" << endl;
        cin >> CalcQuit;

		// Yada yada yada, this can be made smaller ~ Omega
        if (CalcQuit == "Y")
        {
            MultiplicationActiv = 0;
            SelectScreen();
        }
        else if (CalcQuit == "y")
        {
            MultiplicationActiv = 0;
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
            MultiplicationActiv = 0;
            SelectScreen();
        }

        system("CLS");
    }
    return;
}
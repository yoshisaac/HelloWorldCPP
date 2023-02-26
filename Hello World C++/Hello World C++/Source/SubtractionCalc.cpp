#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void CalcQuitY();

void SubtractionCalc()
{
    string CalcQuit;
    double fst, scnd;
    double answr;

    SubtractionActiv = 1;
    LastCalc = "Subtraction";

    /* Ok here is the subtraction calculator */
    while (SubtractionActiv == 1)
    {
        system("CLS");
        cout << "\n\tThis is the c++ two value subtract calculator\n\n\n\n" << flush << endl;


        cout << "value one: ";
        cin >> fst;

        cout << endl;

        cout << "value two: ";
        cin >> scnd;

        cout << "\n\n\n" << endl;

        answr = fst - scnd;
        cout << "\t\tYour answer is: " << answr << endl;
        Sleep(1);

        cout << "Exit? Y or N" << endl;
        cout << "Or type 'quit' to close the application\n" << endl;
        cin >> CalcQuit;

        if (CalcQuit == "Y")
        {
            SubtractionActiv = 0;
            SelectScreen();
        }
        else if (CalcQuit == "y")
        {
            SubtractionActiv = 0;
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
            SubtractionActiv = 0;
            SelectScreen();
        }

        system("CLS");
    }
    return;
}

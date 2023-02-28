#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void CalcQuitY();

void DivisionCalc()
{
    string CalcQuit;
    double fst, scnd;
    double answr;

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

        // you could have fit this on one line, because you can do the operation in the cout statement instead of making a variable ~ Omega
        answr = fst / scnd;
        cout << "\t\tYour answer is: " << answr << endl;
        
        Sleep(1);
        cout << "Exit? Y or N" << endl;
        cout << "Or type 'quit' to close the application\n" << endl;
        cin >> CalcQuit;

        /*
        You should use the || operator here instead of having multiple if statements
        Example: if (CalcQuit == "Y" || CalcQuit == "y")
        ~ Omega
        */
        if (CalcQuit == "Y")
        {
            DivisionActiv = 0;
            SelectScreen();
        }
        else if (CalcQuit == "y")
        {
            DivisionActiv = 0;
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
            DivisionActiv = 0;
            SelectScreen();
        }

        system("CLS");
    }
    return;
}
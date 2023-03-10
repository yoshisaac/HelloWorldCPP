#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

double A, B;
double x, y;
double answr;
bool AxByActiv;

string CalcQuit;

void AB();
void XY();

void AxByCalc()
{

    AxByActiv = 1;
    LastCalc = "Ax+By=C";

    /* Ok here is the Ax+By=C calculator */
    while (AxByActiv)
    {
        system("CLS");
		cout << "\n\tAlgebra: Ax+By=C calculator\n\n\n\n" << endl;

        cout << "Known A: ";
        cin >> A;

        cout << endl;

        cout << "Known B: ";
        cin >> B;

        cout << "\n\n\n" << endl;

        cout << "Variable X: ";
        cin >> x;

        cout << endl;

        cout << "Variable Y: ";
        cin >> y;

        answr = A * x + B * y;
        cout << "\n\t\tYour answer is: " << answr << endl;
        Sleep(2000);

        cout << endl;

        cout << "Exit? Y or N" << endl;
        cout << "Or type 'quit' to close the application" << endl;
        cout << "Or type 'XY' to recalculate your X and Y" << endl;
        cout << "Or type 'AB' to recalculate your A and B" << endl;
        cin >> CalcQuit;

        if (CalcQuit == "XY" || CalcQuit == "xy")
        {
            XY();
        }
        else if (CalcQuit == "AB" || CalcQuit == "ab")
        {
            AB();
        }
        else if (CalcQuit == "Y" || CalcQuit == "y")
        {
            AxByActiv = 0;
            AlgebraSelectScreen();
        }
        else if (CalcQuit == "quit" || CalcQuit == "Quit")
        {
            CalcQuitY();
        }
        else
        {
            AxByActiv = 0;
            AlgebraSelectScreen();
        }

    }
    return;
}

void CalcQuity()
{
}

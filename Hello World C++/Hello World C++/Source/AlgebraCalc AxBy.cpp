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

void CalcQuitY();

void AB();
void XY();

/*
void XY()
{
    while (true == true)
    {
        system("CLS");
        cout << "Known A: " << A << endl;
        cout << "Known B: " << B << endl << endl;
        cout << "Variable X: ";
        cin >> x;
        cout << endl;
        cout << "Variable Y: ";
        cin >> y;
        answr = A*x + B*y;
        cout << "\t\t\t\t\t " << answr << endl;
        sleep(1);
        cout << "Return? Y or N" << endl;
        cout << "Or type 'quit' to close the application" << endl;
        cout << "Or type 'XY' to recalculate your X and Y again." << endl;
        cin >> CalcQuit;
            if (CalcQuit == "XY")
            {
                XY();
            }
            else if (CalcQuit == "Y")
            {
                AxByActiv = 0;
                AlgebraSelectScreen();
            }
            else if (CalcQuit == "y")
            {
                AxByActiv = 0;
                AlgebraSelectScreen();
            }
            else if (CalcQuit == "quit")
            {
                CalcQuitY();
            }
            else if (CalcQuit == "Quit")
            {
                CalcQuitY();
            }
    }
}
void AB()
{
    while (true == true)
    {
        system("CLS");
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
        answr = A*x + B*y;
        cout << "\t\t\t\t\t " << answr << endl;
        sleep(1);
        cout << "Return? Y or N" << endl;
        cout << "Or type 'quit' to close the application" << endl;
        cout << "Or type 'XY' to recalculate your X and Y again." << endl;
        cin >> CalcQuit;
            if (CalcQuit == "XY")
            {
                XY();
            }
            else if (CalcQuit == "AB")
            {
                AB();
            }
            else if (CalcQuit == "Y")
            {
                AxByActiv = 0;
                AlgebraSelectScreen();
            }
            else if (CalcQuit == "y")
            {
                AxByActiv = 0;
                AlgebraSelectScreen();
            }
            else if (CalcQuit == "quit")
            {
                CalcQuitY();
            }
            else if (CalcQuit == "Quit")
            {
                CalcQuitY();
            }
    }
}
*/

void Calculate()
{
    cout << "Variable X: ";
    cin >> x;

    cout << endl;

    cout << "Variable Y: ";
    cin >> y;

    answr = A * x + B * y;
    cout << "\t\t\t\t\t " << answr << endl;
    Sleep(1);
    return;
}

void AxByCalc()
{

    AxByActiv = 1;
    LastCalc = "Ax+By=C";

    /* Ok here is the Ax+By=C calculator */
    while (AxByActiv == 1)
    {
        system("CLS");
        cout << "\n\tAlgebra: Ax+By=C calculator\n\n\n\n" << flush << endl;

        cout << "Known A: ";
        cin >> A;

        cout << endl;

        cout << "Known B: ";
        cin >> B;

        cout << "\n\n\n" << endl;

        Calculate();

        cout << endl;

        cout << "Exit? Y or N" << endl;
        cout << "Or type 'quit' to close the application" << endl;
        cout << "Or type 'XY' to recalculate your X and Y" << endl;
        cout << "Or type 'AB' to recalculate your A and B" << endl;
        cin >> CalcQuit;


        if (CalcQuit == "XY")
        {
            XY();
        }
        else if (CalcQuit == "xy")
        {
            XY();
        }
        else if (CalcQuit == "AB")
        {
            AB();
        }
        else if (CalcQuit == "ab")
        {
            AB();
        }
        else if (CalcQuit == "Y")
        {
            AxByActiv = 0;
            AlgebraSelectScreen();
        }
        else if (CalcQuit == "y")
        {
            AxByActiv = 0;
            AlgebraSelectScreen();
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
            AxByActiv = 0;
            AlgebraSelectScreen();
        }

    }
    return;
}
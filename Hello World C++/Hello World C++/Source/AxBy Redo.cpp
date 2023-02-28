#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void CalcQuitY();

void AB();
void XY();

void XY()
{
    system("CLS");

    cout << "Known A: " << A << endl;
    cout << "Known B: " << B << endl << endl;

    cout << "Variable X: ";
    cin >> x;

    cout << endl;

    cout << "Variable Y: ";
    cin >> y;

    answr = A * x + B * y;
    cout << "\t\t\t\t\t " << answr << endl;
    Sleep(1000);

    cout << "Return? Y or N" << endl;
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

void AB()
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

    answr = A * x + B * y;
    cout << "\t\t\t\t\t " << answr << endl;
    Sleep(1000);

    cout << "Return? Y or N" << endl;
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
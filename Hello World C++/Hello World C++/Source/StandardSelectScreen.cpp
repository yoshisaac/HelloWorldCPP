#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Select.h"
#include "..\Headers\Calc.h"

bool AdditionActiv;
bool SubtractionActiv;
bool DivisionActiv;
bool MultiplicationActiv;

void SelectScreen()
{
    /* first selection screen */
    system("CLS");
    cout << "\n\tSelect where you want to go\n\n" << endl;
    cout << "1: Quit" << endl;
    cout << "2: Settings" << endl;
    cout << "3: Debug" << endl;
    cout << endl;
    cout << "4: Addition" << endl;
    cout << "5: Subtraction" << endl;
    cout << "6: Multiplication" << endl;
    cout << "7: Division" << endl;
    cout << endl;
    cout << "8: Algebra Calcs [WIP]";
    cout << endl << endl;


    int opton;
    cout << "Option: ";
    cin >> opton;

    switch (opton)
    {
    case 1:
        cout << "Booting you out.";
        Sleep(1500);
        exit(0);

    case 2:
        Settings();

    case 3:
        DebugWindow();

    case 4:
        AdditionCalc();

    case 5:
        SubtractionCalc();

    case 6:
        MultiplicationCalc();

    case 7:
        DivisionCalc();

    case 8:
        AlgebraSelectScreen();

    default:
        SelectScreen();
    }
}

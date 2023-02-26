#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Select.h"
#include "..\Headers\Calc.h"

void AlgebraSelectScreen()
{
    /* algebruh select screen*/
    system("CLS");
    cout << "\n\tSelect where you want to go\n\n" << endl;
    cout << "1: Quit" << endl;
    cout << "2: Go back" << endl;;
    cout << endl;
    cout << "3: Ax+By=C" << endl;
    cout << "4: " << endl;
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
        SelectScreen();

    case 3:
        AxByCalc();

    case 4:
        cout << "Everything here is unfinished";
        Sleep(3);

    default:
        AlgebraSelectScreen();
    }
    return;
}
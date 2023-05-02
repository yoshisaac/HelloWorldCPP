#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include <cctype>

#include "..\Headers\Select.h"
#include "..\Headers\Calc.h"

void GeometrySelectionScreen()
{
    /* algebra select screen*/
    system("CLS");
    cout << endl << "\tSelect where you want to go" << endl << endl << endl;
    cout << "1: Quit" << endl;
    cout << "2: Go back" << endl;;
    cout << endl;
    cout << "3: a^2 + b^2" << endl;
    cout << endl << endl;


    cout << "Option: ";
    char opton = getchar();

    switch (opton)
    {
    case '1':
        cout << "Booting you out.";
        Sleep(1500);
        exit(0);
        break;

    case '2':
        SelectScreen();
        break;

    case '3':
        AsqrBsqrCalc();
        break;

    default:
        GeometrySelectionScreen();
        break;
    }
    return;
}
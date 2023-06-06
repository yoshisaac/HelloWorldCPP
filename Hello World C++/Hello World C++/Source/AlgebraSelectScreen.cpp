#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include <cctype>

#include "..\Headers\Select.h"
#include "..\Headers\Calc.h"

void AlgebraSelectScreen()
{
    /* algebra select screen*/
    system("CLS");
    cout << endl << "\tSelect where you want to go" << endl << endl << endl;
    cout << "1: Quit" << endl;
    cout << "2: Go back" << endl;;
    cout << endl;
    cout << "3: Ax+By=C" << endl;
    cout << "4: Ax^2+Bx+C" << endl;
    cout << endl << endl;


    cout << "Option: ";
    char opton = getchar();

	switch (opton) // Nice use of a switch statement good job :thumbs_up: ~ Omega
    {
    case '1':
        cout << "Booting you out."; // Change this string to line up with your other "quits" ~ Omega
        Sleep(1500); // #include <thread> std::this_thread::sleep_for(std::chrono::milliseconds(1500)); ~ Omega
        exit(0);
        break;

    case '2':
        SelectScreen();
        break;

    case '3':
        AxByCalc();
        break;

    case '4':
        ParabCalc();
        break;

    default:
        AlgebraSelectScreen();
        break;
    }
    return;
}
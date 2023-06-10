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
    cout << '\n' << "\tSelect where you want to go" << "\n\n\n";
    cout << "1: Quit" << '\n';
    cout << "2: Go back" << '\n';
    cout << '\n';
    cout << "3: Ax+By=C" << '\n';
    cout << "4: Ax^2+Bx+C" << '\n';
    cout << "\n\n";


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
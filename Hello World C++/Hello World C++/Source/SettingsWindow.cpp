#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void Settings()
{
    while (true == true)
    {
        system("CLS");
        cout << "\n\tSettings" << endl;
        cout << endl;
        cout << "1: Go back" << endl;
        cout << endl;
        cout << "2: Console color" << endl;
        cout << endl << endl;

        int opton;
        cout << "Option: ";
        cin >> opton;

        switch (opton)
        {
        case 1:
            SelectScreen();

        case 2:
            ColorSettings();

        default:
            Settings();
        }
    }
    return;
}
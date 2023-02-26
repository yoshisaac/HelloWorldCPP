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

        string opton;
        cout << "Option: ";
        cin >> opton;

        if (opton == "1")
        {
            SelectScreen();
        }
        else if (opton == "2")
        {
            ColorSettings();
        }
        else
        {
            Settings();
        }
    }
    return;
}
#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void Settings()
{
        system("CLS");
        cout << endl << "\tSettings" << endl;
        cout << endl;
        cout << "1: Go back" << endl;
        cout << endl;
        cout << "2: Console color" << endl;
        cout << "3: Reset password" << endl;
        cout << endl << endl;

        cout << "Option: ";
        char opton = getchar();

        switch (opton)
        {
        case '1':
            SelectScreen();
            break;

        case '2':
            ColorSettings();
            break;

        case '3':
            ResetPassword();
            break;

        default:
            Settings();
            break;
        }
    return;
}
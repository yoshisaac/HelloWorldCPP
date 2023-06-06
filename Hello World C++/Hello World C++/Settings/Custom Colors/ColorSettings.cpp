#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\..\Headers\Calc.h"
#include "..\..\Headers\Select.h"
#include "..\..\Headers\MenuBuilder.h"

using namespace std;

void CustomColorSetting();

void ColorSettings() // This function is infinitely recursive which will cause a stack overflow after enough loops maybe you can find a way to fix it? ~ Omega
{
        system("CLS");
        cout << endl << "\tChange Console Color" << endl;
        cout << endl;
        cout << "1: Go back" << endl;
        cout << endl;
        cout << "2: Light mode" << endl;
        cout << "3: Ultra Light mode" << endl;
        cout << "4: Dark mode" << endl;
        cout << "5: Ultra dark mode" << endl;
        cout << endl;
        cout << "6: Custom color" << endl;
        cout << endl << endl;

        cout << "Option: ";
        char opton = getchar();

        switch (opton)
        {
        case '1':
            Settings();
            break;

        case '2':
            // Try SetConsoleTextAttribute ~ Omega
            system("color f0");
            ColorSettingFile = "color f0";
            ColorWriteToFile();

            break;

        case '3':
            system("color f7");
            ColorSettingFile = "color f7";
            ColorWriteToFile();
            break;

        case '4':
            system("color 07");
            ColorSettingFile = "color 07";
            ColorWriteToFile();
            break;

        case '5':
            system("color 08");
            ColorSettingFile = "color 08";
            ColorWriteToFile();
            break;

        case '6':
            CustomColorSetting();
            break;

        default:
            ColorSettings();
            break;
        }

        ColorSettings();
    return;
}
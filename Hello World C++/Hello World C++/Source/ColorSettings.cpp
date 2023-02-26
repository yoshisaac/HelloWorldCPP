#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void CustomColorSetting();
void FirstScreenColorSettings();

void ColorSettings()
{
    while (true == true)
    {
        system("CLS");
        cout << "\n\tChange Console Color" << endl;
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

        string opton;
        cout << "Option: ";
        cin >> opton;

        if (opton == "1")
        {
            Settings();
        }
        else if (opton == "2")
        {
            system("color f0");
        }
        else if (opton == "3")
        {
            system("color f7");
        }
        else if (opton == "4")
        {
            system("color 07");
        }
        else if (opton == "5")
        {
            system("color 08");
        }
        else if (opton == "6")
        {
            FirstScreenColorSettings();
        }
        else
        {
            ColorSettings();
        }
    }
    return;
}
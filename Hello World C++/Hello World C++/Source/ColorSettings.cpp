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

        int opton;
        cout << "Option: ";
        cin >> opton;

        switch (opton)
        {
        case 1:
            Settings();

        case 2:
            system("color f0");
            ColorSettings(); //Alright so, why do I call the function here after it sets the color? Well, for some odd reason it will cycle through all the cases once after you select a case, why? Omega help.

        case 3:
            system("color f7");
            ColorSettings();

        case 4:
            system("color 07");
            ColorSettings();

        case 5:
            system("color 08");
            ColorSettings();

        case 6:
            CustomColorSetting();

        default:
            ColorSettings();
        }
    }
    return;
}
#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"
#include "..\Headers\MenuBuilder.h"

using namespace std;

void CustomColorSetting();

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
            break;

        case 2:
            system("color f0");
			break; 

        case 3:
            system("color f7");
            break;

        case 4:
            system("color 07");
            break;

        case 5:
            system("color 08");
            break;

        case 6:
            CustomColorSetting();
            break;

        default:
            ColorSettings();
            break;
        }
    }
    return;
}
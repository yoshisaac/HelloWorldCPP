#include <iostream>
#include <fstream>
#include <string>

#include <stdlib.h>
#include <windows.h>
#include <vector>

#include "..\..\Headers\Calc.h"
#include "..\..\Headers\Select.h"

using namespace std;

string opton;
bool good = false;

void CustomColorSetting();

void ColorInputCheck()
{
	// I had to fix this function because the old one was wack (:V woah crazy) but I bet it can still be improved ~ Omega
    char fsthalf = tolower(opton[0]);
    char scndhalf = tolower(opton[1]);

    vector<char> valid = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', };

	bool firsthalf = (find(valid.begin(), valid.end(), fsthalf) != valid.end());
    bool secondhalf = (find(valid.begin(), valid.end(), scndhalf) != valid.end());

    if (firsthalf && secondhalf == 1)
    {
        good = true;
    }
}

void CustomColorSetting()
{

    while (true)
    {
        system("CLS");
        cout << "\n\tCustom Console Color" << endl;
        cout << "      Usage: background:text" << endl;
        cout << endl;
        cout << "1: Go back" << endl;
        cout << endl;
        cout << "0 = Black       8 = Gray" << endl;
        cout << "1 = Blue        9 = Light Blue" << endl;
        cout << "2 = Green       A = Light Green" << endl;
        cout << "3 = Aqua        B = Light Aqua" << endl;
        cout << "4 = Red         C = Light Red" << endl;
        cout << "5 = Purple      D = Light Purple" << endl;
        cout << "6 = Yellow      E = Light Yellow" << endl;
        cout << "7 = White       F = Bright White" << endl;
        cout << endl;
        cout << "note: You can't put the same color twice." << endl;
        cout << "example: You cant have 00 or FF for black on black or white on white, which would make everything unreadable." << endl;
        //This is just a restriction that microsoft themself added. I can't do anything about it, but that restriction also prevents the console from being unusuable if you cant see the text, so I like it.

        cout << endl << endl;

        cin >> opton;

        string finalopton;
        finalopton = "color " + opton;

        if (opton == "1")
        {
            ColorSettings();
        }

        //Make sure they don't put anything that could break it.
        if (opton.length() > 2)
        {
            CustomColorSetting();
        }
        else
        {
            ColorInputCheck();

            if (good == true)
            {
                //The "system" function built into c++ only accepts chars.
                system(finalopton.c_str());
                ColorSettingFile = finalopton;
                ColorWriteToFile();
            }
        }
    }
    return;
}
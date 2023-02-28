#include <iostream>
#include <fstream>
#include <string>

#include <stdlib.h>
#include <windows.h>
#include <vector>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

string opton;
bool good;

void CustomColorSetting();

void ColorInputCheck()
{
	// I had to fix this function because the old one was wack but I bet it can still be improved ~ Omega
    char fsthalf = opton[0];
    char scndhalf = opton[1];

    vector<char> valid = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f', 'A', 'B', 'C', 'D', 'E', 'F' };

	bool firsthalf = (find(valid.begin(), valid.end(), fsthalf) != valid.end());
    bool secondhalf = (find(valid.begin(), valid.end(), scndhalf) != valid.end());

    if (firsthalf == 1)
    {
        if (secondhalf == 1)
        {
            good = 1;
        }
    }
}

void FirstScreenColorSettings()
{
    system("CLS");
    cout << "\n\tCustom Console Color" << endl;
    cout << "      Usage: background:text" << endl;
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
    cout << "example: You cant have 00 or FF for black on black or white on white" << endl;
    // This is just a restriction that microsoft themself added. I can't do anything about it, but that restriction also prevents the console from being unusuable if you cant see the text, so I like it.
	// Maybe let the user know this ^ ~ Omega

    cout << endl;
    system("pause");
    CustomColorSetting();
}

void CustomColorSetting()
{

    while (true == true)
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
        cout << "example: You cant have 00 or FF for black on black or white on white" << endl;
        //This is just a restriction that microsoft themself added. I can't do anything about it, but that restriction also prevents the console from being unusuable if you cant see the text, so I like it.
		 // Maybe since you have this menu in two places, you could make a function for it and call it in both places? ~ Omega

        cout << endl;

        cout << endl;

        cin >> opton;

        good = 0;

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

            //alright, so, this is a HORRIBLE way of checking if what the user input is fine.
            //Even then, it doesn't cover all cases, such as "2p"
            //defind variable, check user input, return true if the user input contains the defined variable, repeat.


            //Credit to GeeksForGeeks for this string to char array.
            //https://www.geeksforgeeks.org/convert-string-char-array-cpp/
            size_t length = finalopton.length();

            // declaring character array (+1 for null terminator)
            char* char_array = new char[length + 1];

            // copying the contents of the
            // string to char array
			strcpy_s(char_array, length + 1, finalopton.c_str());

            if (good == 1)
            {
                //The "system" function built into c++ only accepts chars.
                system(char_array);
            }

            /*
			did you know instead of converting the string to a char array, you can just use the string directly?
			std::string.c_str():
			https://www.cplusplus.com/reference/string/string/c_str/

			std::string example = "echo Hello World";
			system(example.c_str());
            */
        }
    }
    return;
}
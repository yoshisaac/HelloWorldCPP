#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>
#include <string>

#include "Headers\Calc.h"
#include "Headers\Select.h"
#include "Headers\MenuBuilder.h"

using namespace std;

string LastCalc;
string theircolor;

void ApplyCustomColor()
{
    //apply the color from the fle we just read
    ofstream Write;
    Write.open("color.txt");
    //Error handling kinda. 
    //Just set the default color to the file
    //if their color.txt is empty
    if (theircolor.empty())
    {
        theircolor = "color 07";
    }
    Write << theircolor;
    system(theircolor.c_str());
    Write.close();
}

int main()
{
    //Set a window title
    system("title HelloWorldC++");

    //change the color of the screen before anything else!
    ifstream ReadColorSetting;
    ReadColorSetting.open("color.txt");
    getline(ReadColorSetting, theircolor);
    ReadColorSetting.close();

    ApplyCustomColor();
    
    //the "trys" variable tracks how many times they failed to input the password
    int trys = 0;

    LastCalc = "None";

    string passinput;
    string regPassword;
    string password;
    string line;

    ifstream ReadPassword("password.txt");
    getline(ReadPassword, password);

    if (password.length() > 0)
    {
        while (ReadPassword.is_open())
        {
            while (trys < 3)
            {
                // Login screen
                system("CLS");
                cout << endl << "\tInput your password to enter" << endl << endl << endl << endl << endl;
                cout << "password: ";
                cin >> passinput;
                
                if (passinput == password)
                {
                    cout << "Correct!";
                    Sleep(1500);

                    // go to the calculator selection screen
                    SelectScreen();
                }
                else
                {
                    cout << "Wrong!" << endl;
                    Sleep(1500);
                    //add 1 to the integer every time they fail the password
                    trys++;
                }
            }
            
            ReadPassword.close();
            cout << "Too many guesses! Booting you out.";
            Sleep(3500);
            std::exit(0);
        }

        cout << "Unable to open password.txt!" << endl;
        Sleep(2000);
    }
    else
    {
        /*
		Maybe you could try hashing the password so and comparing the hash instead its easier for the computer to compute and a more secure way of storing passwords
        Plus you would learn something new :p
        ~ Omega
        */
        ofstream CreatePassword;
        CreatePassword.open("password.txt");
        cout << endl << "\tRegister a password" << endl;
        cout << endl << endl;
        cout << "Register: ";
        cin >> regPassword;
        CreatePassword << regPassword;
        CreatePassword.close();

        cout << endl;
        cout << "Password saved to \"password.txt\" in the same directory" << endl;
        Sleep(3000);

        main();
    }
    return 0;
}
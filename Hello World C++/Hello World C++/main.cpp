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

int main()
{
    //the "trys" variable tracks how many times they failed to input the password
    int trys = 0;
    string CalcQuit;

    LastCalc = "None";

    string passout, passtemp, passinput;
    string regPassword;
    string password;
    string line;

    ifstream Read("password.txt");
    getline(Read, line);
    password = line;

    if (line.length() > 0)
    {
        while (Read.is_open())
        {
            while (trys < 3) // 0 1 2
            {
                // Login screen
                system("CLS");
                cout << "\n\tInput the password to enter\n\n\n\n" << flush << endl;
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
            
            Read.close();
            cout << "Too many guesses! Booting you out.";
            Sleep(3500);
            exit(0);
        }

        cout << "Unable to open password file" << endl;
        Sleep(2000);
    }
    else
    {
        /*
		Maybe you could try hashing the password so and comparing the hash instead its easier for the computer to compute and a more secure way of storing passwords
        Plus you would learn something new :p
        ~ Omega
        */
        ofstream Create;
        Create.open("password.txt");
        cout << "\n\tRegister a password" << endl;
        cout << endl << endl;
        cout << "Register: ";
        cin >> regPassword;
        Create << regPassword;
        Create.close();

        cout << endl;
        cout << "Password saved to 'password.txt'" << endl;
        Sleep(3000);

        main();
    }
    return 0;
}
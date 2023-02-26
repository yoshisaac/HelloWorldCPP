#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>
#include <string>

#include "Headers\Calc.h"
#include "Headers\Select.h"

using namespace std;

string LastCalc;

void TooManyPswrdFails()
{
    cout << "Too many guesses! Booting you out.";
    Sleep(3500);
    exit(0);
}

void CalcQuitY()
{
    cout << "Quitting...";
    Sleep(1500);
    exit(0);
}

int main()
{
    //the "trys" variable tracks how many times they failed to input the password
    int trys = 0;
    string CalcQuit;

    //string password = "HelloWorld";

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
            while (trys <= 3)
            {
                //if they failed 3 times then close the application
                if (trys == 3)
                {
                    TooManyPswrdFails();
                }
                else
                {
                    // Login screen
                    system("CLS");
                    cout << "\n\tInput the password to enter\n\n\n\n" << flush << endl;
                    cout << "password: ";
                    cin >> passinput;
                }
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
                    //add 1 to the intiger every time they fail the password
                    trys++;
                }
            }
        }

        cout << "Unable to open password file" << endl;
        Sleep(2000);

    }
    else
    {
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

        main();
    }
    return 0;
}

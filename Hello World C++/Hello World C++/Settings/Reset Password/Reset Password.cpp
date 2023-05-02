#include <iostream>
#include <fstream>
#include <string>

#include <stdlib.h>
#include <windows.h>
#include <vector>

#include "..\..\Headers\Calc.h"
#include "..\..\Headers\Select.h"

using namespace std;

void ResetPassword()
{
    string newPassword;

    system("CLS");
    //Be sure this wasn't an accident
    std::cout << endl << "\tAre you sure that you want to do this?" << endl << "Y or N" << endl << endl << endl;

    char opton;
    cin >> opton;
    
    //the tolower function sets the user's inputs to lowercase
    //this is so we don't have to do as many checks in the switch statement
    switch (tolower(opton))
    {
    case 'n':
        return;
        break;
    case 'y':
        break;
    default:
        return;
        break;
    }

    //Pretty much re use the same way we registered a password in main
    system("CLS");
    ofstream CreateNewPassword;
    CreateNewPassword.open("password.txt");
    std::cout << endl << "\tRegister a new password" << endl;
    std::cout << endl << endl;
    std::cout << "New Password: ";
    cin >> newPassword;
    CreateNewPassword << newPassword;
    CreateNewPassword.close();

    std::cout << endl;
    std::cout << "Password saved to 'password.txt' in the same directory" << endl;
    Sleep(1500);

    std::cout << "Logging you out...";
    Sleep(2000);

    main();
}
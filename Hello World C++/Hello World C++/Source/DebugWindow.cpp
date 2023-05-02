#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void DebugWindow()
{
    //more or less, this menu is made to check that the user entered and left the calculators correctly

    system("CLS");
    cout << "Debug Screen" << endl;
    cout << endl;
    cout << endl;
    cout << "Last Calculator: " << LastCalc << endl;
    cout << endl;


    system("pause");
    SelectScreen();

    return;
}
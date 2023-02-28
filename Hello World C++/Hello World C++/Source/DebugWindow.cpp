#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Calc.h"
#include "..\Headers\Select.h"

using namespace std;

void DebugWindow()
{
    string opton;

    //more or less, this menu is made to check that the user entered and left the calculators correctly

    system("CLS");
    cout << "Debug Screen" << endl;
    cout << endl;
    cout << endl;
    cout << "\tActive Calculator Debug:" << endl;
    cout << "\t(all should be zero)\n" << endl;
    cout << "Addition: " << AdditionActiv << endl;
    cout << "Subtraction: " << SubtractionActiv << endl;
    cout << "Multiplication: " << MultiplicationActiv << endl;
    cout << "Division: " << DivisionActiv << endl;
    cout << "Ax+By=C: " << AxByActiv << endl;
    cout << endl;
    cout << "Last Calculator: " << LastCalc << endl;
    cout << endl;


    system("pause");
    SelectScreen();

    return;
}
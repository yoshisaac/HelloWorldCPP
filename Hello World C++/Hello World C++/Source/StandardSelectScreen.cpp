#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Select.h"
#include "..\Headers\Calc.h"
#include "..\Headers\MenuBuilder.h"

// Changed to a different menu builder framework made by Omega

// This file is pretty :smile: ~ Omega

void Quit()
{
    cout << "Quitting...";
    Sleep(1500); // #include <thread> std::this_thread::sleep_for(std::chrono::milliseconds(1500)); ~ Omega
    exit(0); // exit(EXIT_SUCCESS) ~ Omega
}

static const Menu_Option selectScreenOptions[] =
{
    { '1', "1: Quit", Quit},
    { '2', "2: Settings", Settings },
    { '3', "3: Debug\n", DebugWindow },
    { '4', "4: Calculator\n", Calc },
    { '5', "5: Algebra Formulas\n", AlgebraSelectScreen },
    { '6', "6: Gemoetry Formulas", GeometrySelectionScreen },
};

void SelectScreen() // This function is infinitely recursive which will cause a stack overflow after enough loops maybe you can find a way to fix it? ~ Omega
{
    /* first selection screen */
    system("cls");
    cout << endl << "\tSelect where you want to go" << endl << endl << endl;
    
    static const size_t numSelections = sizeof(selectScreenOptions) / sizeof(selectScreenOptions[0]);

    for (size_t i = 0; i < numSelections; ++i)
    {
        cout << selectScreenOptions[i].p_selection_text << "\n";
    }

    cout << "\nEnter selection: ";
    char choice = getchar();

    for (size_t i = 0; i < numSelections; ++i)
    {
        if (choice == selectScreenOptions[i].choice)
        {
            Menu_Processing_Function_Pointer p_function = selectScreenOptions[i].p_processing_function;
            (p_function)();
            break; // Maybe if you change this to a return? ~ Omega
        }
    }

    SelectScreen();
}

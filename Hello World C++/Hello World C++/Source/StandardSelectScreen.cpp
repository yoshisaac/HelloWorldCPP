#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>

#include "..\Headers\Select.h"
#include "..\Headers\Calc.h"
#include "..\Headers\MenuBuilder.h"

bool AdditionActiv;
bool SubtractionActiv;
bool DivisionActiv;
bool MultiplicationActiv;

// Updated to new menu builder framework by Omega

void Quit()
{
    cout << "Booting you out.";
    Sleep(1500);
    exit(0);
}

static const Menu_Option selectScreenOptions[] =
{
    { '1', "1: Quit", Quit},
    { '2', "2: Settings", Settings },
    { '3', "3: Debug\n", DebugWindow },
    { '4', "4: Addition", AdditionCalc },
    { '5', "5: Subtraction", SubtractionCalc },
    { '6', "6: Multiplication", MultiplicationCalc },
    { '7', "7: Division\n", DivisionCalc },
    { '8', "8: Algebra Calcs [WIP]", AlgebraSelectScreen },
};

void SelectScreen()
{
    /* first selection screen */
    system("cls");
    cout << "\n\tSelect where you want to go\n\n" << endl;
    
    static const size_t numSelections = sizeof(selectScreenOptions) / sizeof(selectScreenOptions[0]);

    for (size_t i = 0; i < numSelections; ++i)
    {
        std::cout << selectScreenOptions[i].p_selection_text << "\n";
    }

    std::cout << "\nEnter selection: ";
    char choice = getchar();

    for (size_t i = 0; i < numSelections; ++i)
    {
        if (choice == selectScreenOptions[i].choice)
        {
            Menu_Processing_Function_Pointer p_function = selectScreenOptions[i].p_processing_function;
            system("cls");
            (p_function)();
            break;
        }
    }
    SelectScreen();
}

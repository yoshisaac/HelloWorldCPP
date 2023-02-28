#pragma once
#include <windows.h>
#include <iostream>

typedef void (*Menu_Processing_Function_Pointer)(void);

struct Menu_Option
{
    char choice;
    char const* p_selection_text;
    Menu_Processing_Function_Pointer p_processing_function;
};

//void runOptionZero()
//{
//    // do stuff
//}

//static const Menu_Option example[] =
//{
//  {'0', "Option 0", runOptionZero},
//  {'2', "Option 2", runOptionTwo},
//};

//void mainLoop()
//{
//    static const char menu_title[] =
//        "------------------------------\n"
//        "         Main Menu\n"
//        "------------------------------\n";
//
//    std::cout.write(menu_title, sizeof(menu_title) - 1);
//
//    for (size_t i = 0; i < getQuantitySelections(example); ++i)
//    {
//        std::cout << example[i].p_selection_text << "\n";
//    }
//
//    std::cout << "Enter selection, 0 to quit: ";
//
//    char choice = getchar();
//
//    for (size_t i = 0; i < getQuantitySelections(example); ++i)
//    {
//        if (choice == example[i].choice)
//        {
//            Menu_Processing_Function_Pointer p_function = example[i].p_processing_function;
//            system("cls");
//            (p_function)();
//            break;
//        }
//    }
//
//    system("cls");
//}
//
//int main()
//{
//    while (true)
//    {
//        mainLoop();
//    }
//
//    return EXIT_SUCCESS;
//}
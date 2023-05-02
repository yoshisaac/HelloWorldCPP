#include <iostream>
#include <fstream>

#include <stdlib.h>
#include <windows.h>
#include <string>

#include "..\..\Headers\Calc.h"
#include "..\..\Headers\Select.h"
#include "..\..\Headers\MenuBuilder.h"

using namespace std;

string ColorSettingFile;

void ColorWriteToFile()
{
    ofstream WriteColorSetting;
    WriteColorSetting.open("color.txt");
    WriteColorSetting << ColorSettingFile;
    WriteColorSetting.close();
}
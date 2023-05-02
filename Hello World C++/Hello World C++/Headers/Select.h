#ifndef SELECT_H_INCLUDE
#define SELECT_H_INCLUDE

using namespace std;

extern string LastCalc;

int main();
void SelectScreen();
void AlgebraSelectScreen();
void GeometrySelectionScreen();
void DebugWindow();

void Settings();
void ColorSettings();
void ResetPassword();

extern string ColorSettingFile;
void ColorWriteToFile();

#endif // SELECT_H_INCLUDE
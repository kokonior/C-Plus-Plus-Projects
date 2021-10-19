#ifndef upgrader_h
#define upgrader_h
#include "karakter.h"
using namespace std;

int selectMainMenu();
int selectUpgradeMenu();
void processMainMenu(int pi);
void processUpgradeMenu(int pi, Karakter& k);

#endif // upgrader_h

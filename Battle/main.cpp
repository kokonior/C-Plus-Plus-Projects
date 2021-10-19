#include <iostream>
#include "upgrader.h"
using namespace std;

int main() {
    int pi = selectMainMenu();
    while (pi!=0) {
        processMainMenu(pi);
        pi = selectMainMenu();
    }
    return 0;
}

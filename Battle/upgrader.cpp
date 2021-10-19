#include <iostream>
#include "upgrader.h"
#include "karakter.h"
using namespace std;

int selectMainMenu() {
    int pi;
    cout << endl;
    cout << "Menu Utama " << endl;
    cout << "1. Karakter baru " << endl;
    cout << "2. Karakter lama " << endl;
    cout << "0. Keluar " << endl;
    cout << "Pilihan: ";
    cin >> pi;
    return pi;
}

int selectUpgradeMenu() {
    int pi;
    cout << endl;
    cout << "Menu Permainan " << endl;
    cout << "1. Upgrade Nyawa " << endl;
    cout << "2. Upgrade Stamina " << endl;
    cout << "3. Upgrade Serangan" << endl;
    cout << "4. Upgrade Pertahanan" << endl;
    cout << "9. Ke Menu Duel" << endl;
    cout << "0. Kembali" << endl;
    cout << "Pilihan: ";
    cin >> pi;
    return pi;
}

void processMainMenu(int pi) {
    Karakter k;
    switch(pi) {
        case 1: k = newKarakter();
                break;
        case 2: k = loadKarakter();
                if (k.name=="") {
                    cout << "Karakter tidak ditemukan" << endl;
                    pi = 0;
                } else if (k.pos=="Duel") {
                    cout << "Karakter belum berpindah" << endl;
                    pi = 0;
                }
                break;
        case 0: cout << "Terima kasih";
                break;
    }

    while (pi!=0 && pi!=9) {
        printKarakter(k);
        pi = selectUpgradeMenu();
        processUpgradeMenu(pi, k);
    }
}

void processUpgradeMenu(int pi, Karakter& k) {
    if (pi>=1 && pi<=4 && k.lvl>=10) {
        cout << "Anda telah mencapai level maksimum" << endl;
        return;
    }
    switch(pi) {
        case 1: upgradeHP(k);
                break;
        case 2: upgradeStamina(k);
                break;
        case 4: upgradeDef(k);
                break;
        case 3: upgradeAtk(k);
                break;
        case 9: moveToDuel(k);
                cout << "Silakan Keluar dan buka program Duel" << endl;
                break;
    }

    saveKarakter(k);
}

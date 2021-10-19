#include <iostream>
#include <fstream>
#include "karakter.h"
using namespace std;

void resetKarakter(Karakter& k) {
    k.lvl = 1;
    k.hp = 100;
    k.stam = 30;
    k.atk = 10;
    k.def = 5;
    k.pos = "Training";
}

Karakter newKarakter() {
    Karakter k;
    cout << "Masukkan nama: ";
    cin >> k.name;
    resetKarakter(k);
    return k;
}

void upgradeHP(Karakter& k) {
    k.hp = k.hp + k.hp * 9 / 100;
    k.lvl++;
}
void upgradeStamina(Karakter& k) {
    k.stam = k.stam + k.stam * 5 / 100;
    k.lvl++;
}
void upgradeDef(Karakter& k) {
    k.def = k.def + k.def * 2 / 100;
    k.lvl++;
}
void upgradeAtk(Karakter& k) {
    k.atk = k.atk + k.atk * 11 / 100;
    k.lvl++;
}

void moveToDuel(Karakter& k) {
    k.pos = "Duel";
}

int findKarakter(Karakter ak[], string name) {
    for (int i=0; i<100; i++) {
        if (ak[i].name == name) return i;
        if (ak[i].name == "") return i;
    }
}

void printKarakter(Karakter k) {
    cout << "-----" << endl;
    cout << "Nama                : " << k.name << " (lv." << k.lvl << ")" << endl;
    cout << "Nyawa/Stamina       : " << k.hp << "/" << k.stam << endl;
    cout << "Serangan/Pertahanan : " << k.atk << "/" << k.def << endl;
    cout << "Posisi              : " << k.pos << endl;
    cout << "-----" << endl;
}

void loadAllKarakter(Karakter ak[]) {
    ifstream file;
    file.open("karakter.txt");

    int i = 0;
    while (!file.eof()) {
        file >> ak[i].name >> ak[i].pos;
        file >> ak[i].lvl >> ak[i].hp >> ak[i].stam >> ak[i].atk >> ak[i].def;
        i++;
    }
    file.close();
}

void saveAllKarakter(Karakter ak[]) {
    ofstream file;
    file.open("karakter.txt");

    int i = 0;
    while (ak[i].name!="") {
        file << ak[i].name << " " << ak[i].pos << " " << ak[i].lvl << endl;
        file << ak[i].hp << " " << ak[i].stam << " " << ak[i].atk << " " << ak[i].def << endl;
        file << endl;
        i++;
    }
    file.close();
}

Karakter loadKarakter() {
    string name;
    cout << "Masukkan nama: ";
    cin >> name;

    Karakter ak[100];
    loadAllKarakter(ak);
    int i = findKarakter(ak, name);
    return ak[i];
}

void saveKarakter(Karakter k) {
    Karakter ak[100];
    loadAllKarakter(ak);

    int i = findKarakter(ak, k.name);
    ak[i] = k;
    saveAllKarakter(ak);
}

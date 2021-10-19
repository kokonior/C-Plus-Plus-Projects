#ifndef karakter_h
#define karakter_h
using namespace std;

typedef struct {
    string name, pos;
    int lvl;
    double hp, stam, atk, def;
} Karakter;

Karakter newKarakter();
void resetKarakter(Karakter& k);
void upgradeHP(Karakter& k);
void upgradeAtk(Karakter& k);
void upgradeDef(Karakter& k);
void upgradeStamina(Karakter& k);
void moveToDuel(Karakter& k);

void printKarakter(Karakter k);
void loadAllKarakter(Karakter ak[]);
void saveNewKarakter(Karakter k);
Karakter loadKarakter();
void saveKarakter(Karakter k);

#endif // karakter_h

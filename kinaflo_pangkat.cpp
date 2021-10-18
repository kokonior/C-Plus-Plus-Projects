#include <conio.h>  
#include <iostream>  
#include <math.h>  
using namespace std;  
  
int main() {  
    int hitung = 4; // mendekrasikan tipe data integer dengan nama variabel hitung yang di beri nilai 4
    int nilai = 3;  // mendekrasikan tipe data integer dengan nama variabel nilai yang di beri nilai 3
    int total;  // mendekrasikan tipe data integer dengan nama variabel total 
 
    total = pow(4, nilai); // variabel total diberi nilai dengan library function POW(4 untuk mempangkatan dengan variabel nilai yg isinya 3)
  
    cout << endl << " Hasil dari " << 
    hitung << " pangkat " << nilai << " adalah " 
    << total << endl; // mencetak hasil dari 4 pangkat 3 berupa 64 
    getch();  
}

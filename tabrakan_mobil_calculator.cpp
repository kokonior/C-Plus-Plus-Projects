#include <conio.h>
#include <iostream.h>

using namespace std;
 
main() {
  	int js, ks, jb, kb, ws, wb;       //test
 
  	cout << "Masukkan jarak mobil dari arah Barat = ";
  	cin >> jb;
  	cout << "Masukkan kecepatan mobil dari arah Barat = ";
  	cin >> kb;
  	cout << "Masukkan jarak mobil dari arah Selatan = ";
  	cin >> js;
  	cout << "Masukkan kecepatan mobil dari arah Selatan = ";
  	cin >> ks;
  	cout << endl;
 
   	wb = jb / kb; // ini adalah rumus percepatan
  	ws = js / ks;
 
  if((wb > 0) && (ws > 0)){
  		if ((ws > wb) || (wb > ws)) {
      	cout << "tidak akan terjadi tabrakan di persimpangan";
  		} else {
     		cout << "akan terjadi tabrakan dipersimpangan";
  		}
  } else {
  		cout << "terdapat mobil yang tidak menuju persimpangan";
  }
 
  getch();
 
}

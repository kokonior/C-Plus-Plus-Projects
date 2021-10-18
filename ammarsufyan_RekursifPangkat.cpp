#include <iostream>
using namespace std;

int pangkatIterasi(int, int);
int pangkatRekursif(int, int);

int main ()
{
	int a,b;
	cout << "Masukkan angka: ";
	cin >> a;
	cout << "Masukkan pangkat: ";
	cin >> b;

	cout << "Hasil iterasi = " << pangkatIterasi(a,b) << endl;
	cout << "Hasil rekursif = " << pangkatRekursif(a,b) << endl;

	return 0;
}

int pangkatIterasi(int a, int b)
{
	int hasil = a;
	for(int i = 1; i < b; i++)
	{
		hasil = hasil * a;
		// 2 = 2 * 2 -> 4
		// 4 = 4 * 2 -> 8
		// 8 = 8 * 2 -> 16
	}

	return hasil;
}

int pangkatRekursif(int a, int b)
{
	if(b <= 1)
	{
		return a;
	}
	else
	{
		return a * pangkatRekursif(a, (b-1));
	}
	/*
	    Contoh 2 pangkat 3
		--------------------
		pangkatRekursif(2,3)
		return 2 * pangkatrekursif(2,(3-1=2))

		pangkatRekursif(2,2)
		return 2 * pangkatrekursif(2,(2-1=1))

		pangkatrekursif(2,1)
		return 2
		|
		v
		pangkatrekursif(2,1) => kan = 2
		Artinya fungsi diatasnya bisa kejawab
		|
		v
		pangkatrekursif(2,2)
		return 2 * 2
		return 4

		pangkatrekursif(2,3)
		return 2 * 4
		return 8

		Hasilnya adalah 8
	 */
}

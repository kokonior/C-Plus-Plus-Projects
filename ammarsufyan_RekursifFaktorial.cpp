#include <iostream>
using namespace std;

int rekursifFaktorial(int );

int main ()
{
	int n, hasil;
	cout << "Masukkan angka yang Anda ingin faktorialkan: ";
	cin >> n;

	cout << n << "! = ";
	hasil = rekursifFaktorial(n);
	cout << " = " << hasil;

	return 0;
}

int rekursifFaktorial(int n)
{
	if (n <= 1)
	{
		cout << n;
		return n;
	}
	else
	{
		cout << n << "*";
		return n * rekursifFaktorial(n-1);
	}
}

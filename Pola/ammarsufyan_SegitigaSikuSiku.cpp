/*
{MEMBUAT SegitigaSikuSiku.cpp
NAMA    = AMMAR SUFYAN
TANGGAL = Nov 4, 2020}
*/

#include <iostream>
using namespace std;

int main()
{
	int n;
	char status;

	do
	{
		cout << "Silakan masukkan jumlah pola = ";
		cin >> n;
		cout << endl;

		cout << "Pola 1" << endl;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << endl;

		cout << "Pola 2" << endl;
		for(int i = 1; i <= n; i++)
		{
			for(int j = n; j >= i; j--)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << endl;

		cout << "Pola 3" << endl;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j < i; j++)
			{
				cout << " ";
			}
			for(int k = n; k >= i; k--)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << endl;

		cout << "Pola 4" << endl;
		for(int i = 1; i <= n; i++)
		{
			for(int j = n; j > i; j--)
			{
				cout << " ";
			}
			for(int k = 1; k <= i; k++)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << "Ingin memasukkan lagi? [y/n]";
		cin >> status;
		system("cls");
	}
	while(status =='y' || status =='Y');

	cout << endl <<"Program selesai" << endl;

	system("pause");
	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int i, n;
	int n1 = 0;
	int n2 = 1;
	int n3 = 0;

	cout << "============Program Deret Fibonacci============" << endl;
	cout << "Masukkan nilai n = ";
	cin >> n;
	cout << n2 << " ";

	for(i = 1; i < n; i++)
	{
		n1 = n2 + n3; // n1 = 1 + 0 = 1
		n3 = n2; // n3 = 1
		n2 = n1; // 1 = n1
		cout << n1 << " ";
	}

	cout << endl;
	cout << "================Program Selesai================" << endl;

	system("pause");
	return 0;
}

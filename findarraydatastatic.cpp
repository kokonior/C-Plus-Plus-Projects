#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int array[9] = {3, 10, 12, 21, 35, 56, 66, 77, 90};
    int awal, tengah, akhir, angka;
    cout << "Input number: ";
    cin >> angka;

    // Initialize first and last variables.
    awal = 0;
    akhir = 9;
    while (awal <= akhir)
    {
        
        tengah = (awal + akhir) / 2;

        if (angka > array[tengah])
        {
            awal = tengah + 1;
        }
        else if (angka < array[tengah])
        {
            akhir = tengah - 1;
        }
        else
        {
            awal = akhir + 1;
        }
    }
    if (angka == array[tengah])
    {
        cout << "Data found on index: " << tengah << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }
    getch();
}

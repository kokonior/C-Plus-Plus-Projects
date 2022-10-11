#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

main()
{

    int pajak, denda, bulan, penghasilan;

    cout << "masukan penghasilan anda (dalam juta) = ";
    cin >> penghasilan;
    cout << "masukan banyak bulannya = ";
    cin >> bulan;

    if (penghasilan > 1 && penghasilan <= 50000000)
    {
        pajak = penghasilan * 0.05;
        if (bulan > 1){
            denda = (((bulan - 1) * pajak) + ((pajak * 0.12) * (bulan - 1)));
            cout << "pajak yg harus dibayarkan = " << denda << endl;
        }else if (bulan = 1){
            cout << "pajak yang harus dibayarkan = " << pajak << endl;
        }else{
            cout << "anda tidak mempunyai pajak yg harus dibayarkan";
        }
    }
    else if (penghasilan > 50000000 && penghasilan <= 250000000)
    {
        pajak = penghasilan * 0.15;
        if (bulan > 1){
            denda = (((bulan - 1) * pajak) + ((pajak * 0.12) * (bulan - 1)));
            cout << "pajak yang harus dibayarkan = " << denda << endl;
        }else if (bulan = 1){
            cout << "pajak yang harus dibayarkan = " << pajak << endl;
        }else{
            cout << "anda tidak mempunyai pajak yang harus dibayarkan";
        }
    }
    else if (penghasilan > 250000000 && penghasilan <= 500000000)
    {
        pajak = penghasilan * 0.25;
        if (bulan > 1){
            denda = (((bulan - 1) * pajak) + ((pajak * 0.12) * (bulan - 1)));
            cout << "pajak yang harus dibayarkan = " << denda << endl;
        }else if (bulan = 1){
            cout << "pajak yang harus dibayarkan = " << pajak << endl;
        }else{
            cout << "anda tidak mempunyai pajak yang harus dibayarkan";
        }
    }
    else if (penghasilan > 500000000)
    {
        pajak = penghasilan * 0.35;
        if (bulan > 1){
            denda = (((bulan - 1) * pajak) + ((pajak * 0.12) * (bulan - 1)));
            cout << "pajak yang harus dibayarkan = " << denda << endl;
        }else if (bulan = 1){
            cout << "pajak yang harus dibayarkan = " << pajak << endl;
        }else{
            cout << "anda tidak mempunyai pajak yang harus dibayarkan";
        }
    }
    else
    {
        cout << "inputan anda salah";
    }
    getch();
}

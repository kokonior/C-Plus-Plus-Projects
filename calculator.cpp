#include <iostream>
using namespace std;

int main() //fungsi ini wajib ada karena merupakan bagian penting dari c++
{
    int opsi, angka1, angka2, hasil;
    /* 
    Deklarasi variabel
    variabel opsi akan berisi operasi (tambah, kurang, kali, bagi, modulus) yang dipilih user
    variabel angka1 akan berisi angka pertama yang di input oleh user
    variabel angka2 akan berisi angka kedua yang di input oleh user
    variabel hasil akan berisi hasil operasi dari dua angka yang telah diinput user
    */
    cout << "1. Penjumlahan \n2. Pengurangan \n3. Perkalian \n4. Pembagian \n5. Modulus \nPilih opsi : ";
    cin >> opsi; //kita input operasi disini sesuai dengan list yang kita tulis
    //user hanya perlu input angkanya saja

    if (opsi == 1)
    //kita membuat argumen if yaitu jika if sama dengan 1 maka operasi penjumlahan yang akan dijalankan
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1; //input angka1
        cout << "Angka kedua   > ";
        cin >> angka2; //input angka2

        hasil = angka1 + angka2; //operasi penjumlahan
        cout << "Hasil dari " << angka1 << " + " << angka2 << " adalah " << hasil << endl;
        //hasil dari penjumlahan
    }

    else if (opsi == 2)
    //jika user memasukkan opsi sama dengan 2 maka operasi pengurangan yang akan dijalankan
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1; //input angka1
        cout << "Angka kedua   > ";
        cin >> angka2; //input angka2

        hasil = angka1 - angka2; //operasi pengurangan
        cout << "Hasil dari " << angka1 << " - " << angka2 << " adalah " << hasil << endl;
        //hasil dari pengurangan
    }

    else if (opsi == 3)
    //jika user memasukkan opsi sama dengan 3 maka operasi perkalian yang akan dijalankan
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1;//input angka1 
        cout << "Angka kedua   > ";
        cin >> angka2;//input angka2

        hasil = angka1 * angka2;//operasi perkalian menggunakan tanda "*" bukan tanda "x"
        cout << "Hasil dari " << angka1 << " x " << angka2 << " adalah " << hasil << endl;
        //hasil dari operasi perkalian
    }

    else if (opsi == 4)
    //jika user memasukkan opsi sama dengan 4 maka operasi pembagian akan dijalankan
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1;//input angka1
        cout << "Angka kedua   > ";
        cin >> angka2;//input angka2

        hasil = angka1 / angka2;//operasi pembagian menggunakan tanda "/" bukan tanda ":"
        cout << "Hasil dari " << angka1 << " / " << angka2 << " adalah " << hasil << endl;
        //hasil dari operasi pembagian
    }

    else if (opsi == 5)
    //jika user memasukkan opsi sama dengan 5 maka operasi modulus akan dijalankan
    //modulus adalah hasil sisa bagi
    {
        cout << "Masukkan angka" << endl;
        cout << "Angka pertama > ";
        cin >> angka1;//input angka1
        cout << "Angka kedua   > ";
        cin >> angka2;//input angka2

        hasil = angka1 % angka2;//operasi modulus menggunakan tanda "%"
        cout << "Hasil dari " << angka1 << " % " << angka2 << " adalah " << hasil << endl;
        //hasil dari operasi modulus
    }

    else
    //kode ini akan berjalan jika user memasukkan angka selain angka 1 sampai 5
    //misalnya kita input angka 6 maka outputnya adalah "Masukkan opsi dengan benar!"
    {
        cout << "Masukkan opsi dengan benar!" << endl;
    }

    return 0;
}

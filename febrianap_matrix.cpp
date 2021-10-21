#include<iostream>
using namespace std;

int main(){
    /*  array: tipe data berkelompok dengan jenis sama,     contoh:
     inidata={11,22,33,44,55} --->int,     inibuah={"naga","alpukat","nanas"} --->string
     deklarasi array: tipe data variabel[jumlah data]       */
    int inidata[9]={11,22,33,44,55,66,77,88,99};
    cout<<"datanya adalah "<<inidata[3]<<"\n\n"; //mengakses data array
    for (int f=0;f<3;f++){ //mengakses data dengan perulangan
        cout<<"data ke-"<<f<<" adalah "<<inidata[f]<<endl;
    }
    int f=0;
    cout<<"\n[";
    while (f<5){  //[11 22 33 44 55]
        cout<<inidata[f]<<" ";
        f++;
    }
    cout<<"]\n\n";
    /*  array multi dimensi:     dimensi 1--> vektor,     dmensi 2--> matriks
     deklarasinya: tipedata namavariabel[baris][kolom],     contoh:
     1 2 3
     4 5 6      */
    int inidata1[2][3]={{1,2,3},{4,5,6}};
    for(int f=0;f<2;f++){
        for(int g=0;g<3;g++){
            cout<<inidata1[f][g]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int inihasil[2][3];
    int inidata2[2][3]={{2,3,4},{5,6,7}};
    for(int f=0;f<2;f++){
        for(int g=0;g<3;g++){
            inihasil[f][g]=inidata1[f][g]+inidata2[f][g]; //menjumlahkan data dengan inidata1+inidata2
            cout<<inihasil[f][g]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int inimatriks3[2][3];
    cout<<"masukkan angka"<<endl;
    for(int f=0;f<2;f++){
        for(int g=0;g<3;g++){
            inihasil[f][g]=inidata1[f][g]+inidata2[f][g];
            cout<<"matriks baris ke-"<<f<<" kolom ke-"<<g<<"= ";
            cin>>inimatriks3[f][g]; //menginput matriks
            cout<<"cek matriks baris ke-"<<f<<" kolom ke "<<g<<"= "<<inimatriks3[f][g]<<"\n\n";
        }
    }
    for(int f=0;f<2;f++){
        for(int g=0;g<3;g++){
            cout<<inimatriks3[f][g]<<" ";
        }
        cout<<endl;
    }
}

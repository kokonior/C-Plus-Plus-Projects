#include <iostream>

using namespace std;

void permutasi()
{
    int n,r;
    int nfak=1, nrfak=1;

    cout<<"MENCARI PERMUTASI"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"Masukkan n : ";
    cin>>n;

    cout<<"Masukkan r : ";
    cin>>r;

    //r tidak boleh lebih besar dari n unsur
    while (n<r){
          cout<<"\nr tidak boleh lebih besar dari n";
          cout<<"\nMasukkan n : ";
          cin>>n;

          cout<<"Masukkan r : ";
          cin>>r;
    }

    // perulangan permutasi
    for(int i=n; i>0; i--){       //perulangan n faktorial
            nfak = nfak * i;
    }

    for(int i=n-r; i>0; i--){     //perulangan n-r faktorial
            nrfak = nrfak * i;
    }

    cout << "\nNilai dari n adalah " << nfak;
    cout << "\nNilai dari r adalah " << nrfak;
    //rumus permutasi
    cout<< "\nHasil dari permutasi tersebut dari " << nfak << " / " << nrfak << " adalah : " << nfak/nrfak;
    cout << "\n\n";

}

int main()
{
    permutasi();
    return 0;
}
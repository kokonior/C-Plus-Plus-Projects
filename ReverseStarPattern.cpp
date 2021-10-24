#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout<<" ";
        }
            for (int k = 1; k <= i+1; k++)
            {
                cout<<"*";
            }
            cout<<endl;

    }
    
}

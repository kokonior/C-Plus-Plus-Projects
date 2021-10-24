#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0,a[n];
    for (int i = 1; i <= n; i++)
    {
        if(n%i==0){
        a[count]=i;
        count++;
        }
    }
    cout<<count<<endl;
    for (int i = 0; i < count; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
}

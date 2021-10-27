#include<iostream>
using namespace std;
int main(){
    int i,n;

    cout<<"Enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The original array is:-";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr1[n];
    cout<<"The reversed array is:-";
    for(i=n-1;i>=0;i--)
    {
        arr1[n-i-1]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
}

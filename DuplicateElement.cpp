#include<iostream>
using namespace std;
int main(){
    int n=12;
    int a[n]={2,3,4,8,9,9,12,13,17,17,17,19};
    int l=2;
    int h=19;
    int lastDuplicate = 0;


    for (int i = 0; i < n-1; i++)
    {
        if(a[i]==a[i+1] && a[i]!= lastDuplicate){
            int j=i+1;
            while (a[i]==a[j])
            {
                j++;
            }
            
            cout<<a[i]<<" is duplicate "<<j-i<<" times"<<endl;
            lastDuplicate =a[i];
            i=j-1;
        }
    }
    

}

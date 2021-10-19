#include<iostream>
using namespace std;
int ncr(int n,int r){
    if(r==0||n==r)
        return 1;
    else
        return ncr(n-1,r-1)+ncr(n-1,r);
}
int main(){
    cout<<ncr(4,2);
}

#include<iostream>
using namespace std;

int main ()  
{  
    int a[10] = {10, 23, 40, 1, 2, 0, 14, 13, 50, 9};  
    int item,flag=0;  
    cout<<"Enteritem which need to be searched"<<endl;
    cin>>item;  
    for (int i = 0; i< 10; i++)  
    {  
        if(a[i] == item)   
        {  
            flag = i+1;  
            break;  
        }   
        else   
        flag = 0;  
    }   
    if(flag != 0)  
    {  
        cout<<"Item found at location "<<flag;  
    }  
    else  
    {  
        cout<<"Item not found";   
    }  
}   

#include<iostream>
using namespace std;
int main(){
    char name[]="Nipun";
    //All capital

    for (int i = 0; i < name[i]!='\0'; i++)
    {
        if(name[i]>='A' && name[i]<='Z'){

        }else if(name[i]>='a' && name[i]<='z'){
            name[i]=name[i]-32;
        }
    }
    cout<<"All capital "<<name<<endl;

    //All small

    for (int i = 0; i < name[i]!='\0'; i++)
    {
        if(name[i]>='a' && name[i]<='z'){

        }else if(name[i]>='A' && name[i]<='z'){
            name[i]=name[i]+32;
        }
    }
    cout<<"All small "<<name<<endl;    

    //Toggle

    for (int i = 0; i < name[i]!='\0'; i++)
    {
        if(name[i]>='A' && name[i]<='Z'){
            name[i]=name[i]+32;

        }else if(name[i]>='a' && name[i]<='z'){
            name[i]=name[i]-32;
        }
    }
    cout<<"Toggle "<<name<<endl;
}

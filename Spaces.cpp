#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main()
{
char str[100];
int i;
int space=0;
    cout<<"Enter a string\n";
    gets(str);
    for(i=0; i<=str[i]; i++){
 if(str[i]==' '){
        space++;
    }
}
cout<<"Total white space :"<<space;
getch();
    return 0;
}

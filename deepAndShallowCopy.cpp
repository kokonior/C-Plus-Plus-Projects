#include<iostream>
#include<cstring>
// #include<algorithm>
using namespace std;
class student{
    char *name;
    int age;
    public:
    student(){

    }
    student(int age,char *name){
        // this->name=name;
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
        this->age=age;
    }
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};
int main(){
    char name[]="abcd";
    student s1(14,name);
    s1.display();
    name[3]='e';
    student s2(20,name);
    s2.display();
    s1.display();

}

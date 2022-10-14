// This is simple program to reverse strings
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string kata;
    cout<<"Input your words here -> ";
    cin>>kata;
    
    reverse(kata.begin(), kata.end());
    cout<<"The reverse word is -> "<<kata;

    return 0;
}

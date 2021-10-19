#include<bits/stdc++.h>
using namespace std;

void solve(string input, string output)
{
    if(input.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    solve(input.substr(1),output);
    solve(input.substr(1),output + input[0]);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string input;
        cin>>input;
        string output="";
        solve(input, output);
    }
}

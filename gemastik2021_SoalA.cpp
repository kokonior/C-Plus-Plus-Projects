#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define MOD 1000000007
#define ll long long
#define pb push_back
/*
https://raw.githubusercontent.com/raisilhamn/competitive-programming/master/gemastik%202021/prob-%5BA%5D%20Undian%20Berhadiah.pdf
AC
score : 317 
*/

using namespace std;

int main()
{
    fastio;
    int gema;
    int t, jum;
    cin >> jum >> gema;
    t = jum;
    vector<int> kupon(t);
    vector<string> kuponStr(t);
    vector<int> selisih(t);
    
    for (size_t i = 0; i < t; i++)
    {
        cin >> kuponStr[i];
        stringstream ubah(kuponStr[i]);
        ubah >> kupon[i];
        selisih[i] = abs(gema - kupon[i]);
    }

    int min = *min_element(selisih.begin(), selisih.end());
    
    vector<string> bener;
    for (int i = 0; i < jum; i++)
    {
        if (selisih[i] == min)
        {
            bener.push_back(kuponStr[i]);
        }
    }
    sort(bener.begin(), bener.end());
    for (size_t i = 0; i < bener.size(); i++)
    {
        cout << bener[i] << endl;
    }

    return 0;
}
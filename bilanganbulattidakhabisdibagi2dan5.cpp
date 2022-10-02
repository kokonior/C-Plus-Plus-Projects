#include <bits/stdc++.h>
using namespace std;

int main () {
	int ans=0;
	for(int i=1; i<=2018; i++)
		if (!(i%2==0) && !(i%5==0))
			ans++;
	cout << ans << endl;
	return 0;
}

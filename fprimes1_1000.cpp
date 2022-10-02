#include <bits/stdc++.h>
using namespace std;

int main () {
	for(int i=1; i<=1000; i++){
		int num_factor = 0;
		for(int j=1; j<=i; j++)
			if (i%j==0)
				num_factor++;
		if (num_factor==5)
			cout << i << endl;
	}
	return 0;
}

// maximum money that can be robbed without robbing adjacent houses
// [2,7,9,3,1]
// output= 12
#include<bits/stdc++.h>
using namespace std;
int houseRobber(vector<int>& v){
	int n=v.size();
	int dp[n];
	dp[0]=v[0];
	dp[1]=max(v[0],v[1]);
	for(int i=2;i<n;i++)
	dp[i]=max(dp[i-1],v[i]+dp[i-2]);
	return dp[n-1];
}
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++)
		cin>>v[i];
		if(n==1)
		cout<<v[0]<<endl;
		else
		cout<<houseRobber(v)<<endl;
	}
}

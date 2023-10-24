
#include<iostream>
#include <bits/stdc++.h>
#define MOD 10000000007
using namespace std;
int dp[100001], n;

int count_paths(int i) {

	if(i == 0)
		return 1;
	if(i < 0)
		return 0;
	if(dp[i] != -1)
        return dp[i];
        cout<<"b "<<dp[i]<<endl;
	dp[i] = count_paths(i - 1) % MOD;
	cout<<"A "<<dp[i]<<endl;

	//dp[i] = (dp[i] + count_paths(i - 2)) % MOD;
	//cout<<dp[i]<<endl;

	//dp[i] = (dp[i] + count_paths(i - 3)) % MOD;

	//cout<<dp[i]<<endl;
	return dp[i];
}

int main() {

	int t;
	cin >> t;
//	assert(t >=1 and t<= 5);
	for(int i = 0; i < t; i++) {
		cin >> n;
//		assert(n >= 1 and n <= 100000);
		memset(dp, -1, sizeof dp);
		int ans = count_paths(n);
		cout <<"Ans"<< ans << endl;
	}

	return 0;
}

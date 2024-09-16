#include <bits/stdc++.h>
using namespace std;
string a[1005];
int dp[1005][1005];
int n;
const int mod = 1e9 + 7;
int main(){
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	if (a[0][0] != '*'){
		dp[0][0] = 1;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (a[i][j] == '*') continue;
			if (i > 0){
				dp[i][j] += dp[i-1][j];
				dp[i][j] %= mod;
			}
			if (j > 0){
				dp[i][j] += dp[i][j-1];
				dp[i][j] %= mod;
			}
		}
	}
	cout << dp[n-1][n-1] << endl;
}
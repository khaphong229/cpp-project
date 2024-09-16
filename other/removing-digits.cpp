#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	vector<int> dp(n+1,1e9);
	dp[0]=0;
	for(int i=1;i<=n;i++){
		int tmp=i;
		while(tmp>0){
			dp[i]=min(dp[i],dp[i-tmp%10]+1);
			tmp/=10;
		}
	}
	cout << dp[n] << endl;
	return 0;
}
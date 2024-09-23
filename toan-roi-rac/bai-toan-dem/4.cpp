#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n;
int dp[N];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    dp[0]=1;
    for(int i=1; i<=n; i++) {
    	for(int j=1; j<=6; j++){
    		if(j<=i){
    			dp[i]=(dp[i]%mod + dp[i-j]%mod)%mod;
    		}
    	}
    }
    cout << dp[n];
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
ll a[N];
int n, q;
ll dp[N][20];
void build(){
	for (int i=1; i<=n; i++) dp[i][0]=a[i];
	for (ll j=1; (1 << j) <=n; j++){
		for (ll i=1; i<=n; i++){
			dp[i][j]=min(dp[i][j-1], dp[i+(1<<(j-1))][j-1]);
		}
	}
}
int get(ll l, ll r){
	ll d= (int)log2(r-l+1);
	return min(dp[l][d], dp[r-(1<<d)+1, d]);
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    ff(i, 1, n) {
    	cin >> a[i];
    }
    build();
    while (q--){
    	int l, r;
    	cin >> l >> r;
    	cout << get(l, r) << endl;
    }
	return 0;
}

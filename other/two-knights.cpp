#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n;
ll solve(int x) {
	ll totalWays = ((long long)x*x*(x*x-1))/2;
	ll attackWays= 4*(x-1)*(x-2);
	ll ans=totalWays - attackWays;
	return ans;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
    	cout << solve(i) << endl;
    }
	return 0;
}

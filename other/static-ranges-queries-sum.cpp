#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
ll a[N], b[N];
int n, q;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    ff(i, 1, n){
    	cin >> a[i];
    }
    b[1]=a[1];
    ff (i, 1, n){
    	b[i]=b[i-1]+a[i];
    }
    while (q--){
    	ll l, r;
    	cin >> l >> r;
    	cout << b[r]-b[l-1] << endl;
    }

	return 0;
}

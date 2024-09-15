#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    map <int, int> s;
    cin >> t;
    while (t--){
    	int n, k;
    	cin >> n >> k;
    	int a[n];
    	for (int i=0; i<n; i++){
    		cin >> a[i];
    	}
    	bool ok=0;
    	sort(a, a+n);
    	fff(i, 0, n){
    		s[a[i]] =1;
    		if (s[a[i] - k]){
    			ok = 1;
    			break;
    		}
    	}
    	if (ok) cout << "YES" << ln;
    	else cout << "NO" << ln;
    	s.clear();
    }

	return 0;
}

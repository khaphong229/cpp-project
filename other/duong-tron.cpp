#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int t, n, k;
vector<pair<int, int>> a;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
    	cin >> n;
    	cin >> k;
    	for(int i=0; i<n; i++){
    		int x, y;
    		cin >> x >> y;
    		a.push_back({x, y}); 
    	}
    }

	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int t;
int solve(int n, int a[]){
	if (n==1) return a[1];
	vector <int> tmp;
	for (int i=1; i<=n; i+=2){
		tmp.push_back(a[i]);
	}
	return *max_element(tmp.begin(), tmp.end());
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	int a[n+5];
    	for (int i=1; i<=n; i++){
    		cin >> a[i];
    	}
    	cout << solve(n, a) << endl;
    }

	return 0;
}

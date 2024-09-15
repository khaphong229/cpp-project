#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int t;
int cnt=0;
int solve(int n){
	cnt=n/4;
	n%=4;
	if(n>0){
		cnt++;
	}
	return cnt;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
    	int n;
    	cin >> n;
    	cout << solve(n) << ln;
    }

	return 0;
}

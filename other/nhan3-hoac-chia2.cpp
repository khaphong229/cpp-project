#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int a[10005];
int n;
int solve(int n, int a[]){
	vector<int> res(n, 0);
	for (int i=0; i<n; i++){
		int cnt=0;
		while(a[i]%2==0){
			a[i]/=2;
			cnt++;
		}
		res[i]=cnt;
	}
	return accumulate(res.begin(), res.end(), 0);
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=0; i<n; i++){
    	cin >> a[i];
    }
    cout << solve(n, a);
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;

int n;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    ll a[n+5];
    for(ll i=0;i<n;i++) cin >> a[i];
    ll res=0;
	sort(a,a+n);
	FT(i,0,n){
		if(res+1<a[i]){
			break;
		}else{
			res+=a[i];
		}
	}
	cout << res+1 << ln;
	return 0;
}

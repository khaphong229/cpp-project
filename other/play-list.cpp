#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;
const ll N=2e5+5;
int n;
int a[N];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    FT(i,0,n){
    	cin >> a[i];
    }
    sort(a,a+n);
    ll cnt=1;
    for(int i=0;i<n-1;i++){
    	if(a[i+1]!=a[i]) cnt++;
    }
    cout << cnt << ln;
	return 0;
}

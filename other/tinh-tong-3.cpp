#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;
ll n;
ll sum3(ll n){
	if(n==0) return 0;
	return pow(n,3) + sum3(n-1);
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cout << sum3(n) << ln;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int mod=1e9+7;
ll binpow(ll a, ll b){
	if(b==0){
		return 1;
	}
	ll x=binpow(a,b/2);
	if(b%2==0){
		return (x%mod) * (x%mod)%mod;
	}else{
		return ((x%mod) * (x%mod)) * (a%mod)%mod;
	}
}
int main(){
	int n,k;
	cin >> n >> k;
	cout << binpow(n,k);
	return 0;
}
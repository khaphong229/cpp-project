#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

ll f[100];

void fibo(){
	f[0]=0;
	f[1]=1;
	for (int i = 2; i < 93; ++i)
	{
		f[i]=f[i-1]+f[i-2];
	}
}

int check(ll n){
	for (int i = 1; i < 93; ++i)
	{
		if(f[i]==n){
			return 1;
		}
	}
	return 0;
}

int main(){
	fibo();
	int n;
	cin >> n;
	ll a[n];
	for(ll &x: a) cin >> x;
	int ok=0;
	for (ll i: a){
		if(check(i)){
			cout << i << ' ';
			ok=1;
		}
	}
	if(ok==0) cout << "NONE" << endl;
	return 0;
}
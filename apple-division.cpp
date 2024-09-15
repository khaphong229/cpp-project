#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

void f(int i, int n, ll s1, ll s2, vector<ll> &a, ll &mi){
	if(i==n){
		mi=min(mi, abs(s1-s2));
		return;
	}
	f(i+1,n,s1+a[i],s2,a,mi);
	f(i+1,n,s1,s2+a[i],a,mi);
}

int main(){
	ll n;
	cin >> n;
	vector<ll> a(n);
	for(int i=0; i<n;i++){
		cin >> a[i];
	}
	ll mi=INT_MAX;
	f(0,n,0,0,a,mi);
	cout << mi << endl;
	return 0;
}
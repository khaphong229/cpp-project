#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n,q;
	cin >> n >> q;
	int a[n];
	for(int &x: a){
		cin >> x;
	}
	int d[n+2];
	d[0]=a[0];
	for(int i=1;i<n;i++){
		d[i]=a[i]-a[i-1];
	}
	while(q--){
		int l,r,k;
		cin >> l>>r>>k;
		d[l]+=k;
		d[r+1]-=k;
	}
	ll f[n];
	f[0]=d[0];
	for (int i = 1; i < n; ++i)
	{
		f[i]=f[i-1]+d[i];
	}
	for(int i=0; i< n;i++){
		cout << f[i] << ' ';
	}
	return 0;
}
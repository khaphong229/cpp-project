#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	ll n;
	cin >> n;
	ll a[n];
	for(ll &x:a) cin >> x;
	ll cnt=0;
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			while(a[i]<a[i-1]){
				a[i]++;
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
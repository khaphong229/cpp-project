#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void apple(int i, int n, ll sum1, ll sum2, vector<ll> &a, ll &mi){
	if(i==n){
		mi=min(mi, abs(sum1-sum2));
		return;
	}
	apple(i+1,n,sum1+a[i],sum2,a,mi);
	apple(i+1,n,sum1,sum2+a[i],a,mi);
}

void solve(){
	ll n;
	cin >> n;
	vector<ll> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	

	ll mi=INT_MAX;

	apple(0,n,0,0,a,mi);

	cout << mi << endl;
}

int main()
{
	solve();
	return 0;
}
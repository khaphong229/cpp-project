#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	for( int &x: a) cin >> x;
	int res=a[0];
	for (int i = 1; i < n; ++i)
	{
		res=gcd(res,a[i]);
	}
	cout << res << endl;
	return 0;
}
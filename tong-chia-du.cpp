#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int mod=1e9+7;
	ll kq=0;
	for (int i = 0; i < n; ++i)
	{
		ll tmp;
		cin >> tmp;
		kq+=tmp;
		kq%=mod;
	}
	cout << kq << endl;
	return 0;
}
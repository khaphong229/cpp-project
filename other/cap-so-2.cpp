#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	sort(a,a+n);
	int min_val=1e9;
	for (int j = 1; j < n; ++j)
	{
		min_val=min(a[j]-a[j-1],min_val);
	}
	cout << min_val << endl;
	return 0;
}
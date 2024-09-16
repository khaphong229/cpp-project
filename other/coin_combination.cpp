#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const ll mod=1e9+7;
int main()
{
	int n, x;
	cin >> n >> x;
	int arr[n];
	for(int &k : arr) cin >> k;
	vector<int> ans(x+1, 0);
	ans[0]=1;
	for (int i = 1; i <=x; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i-arr[j]>=0){
				ans[i]+=ans[i-arr[j]];
				ans[i]%=mod;
			}
		}
	}
	cout << ans[x] << ln;
	return 0;
}
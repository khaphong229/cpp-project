#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main()
{
	int n, x;
	cin >> n >> x;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int mi=INT_MAX;
	vector<int> res(x+1, mi);
	res[0]=0;
	for (int i = 0; i < x; ++i)
	{
		if(i==mi){
			continue;
		}
		for (int j : arr)
		{
			if(i+j<=x){
				res[i+j]=min(res[i+j],res[i]+1);
			}
		}
	}
	if(res[x]!=mi){
		cout << res[x] << ln;
	}else{
		cout << -1 << ln;
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	
	int n,k;
	cin >> n;
	int a[n];
	for (int &x : a) cin >> x;
	int res=INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			if (abs(a[i]-a[j])<res){
				res=abs(a[i]-a[j]);
			}
		}
	}
	
	return 0;
}
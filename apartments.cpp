#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	vector<int> a(n);
	vector<int> b(m);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}

	sort(a.begin(),a.end());
	sort(b.begin(),b.end());

	int cnt=0;
	int i=0, j=0;
	while(i<n){
		while(j<m && b[j]<a[i]-k)
			j++;
		if(abs(b[j]-a[i])<=k){
			cnt++;
			i++;
			j++;
		}else{
			i++;
		}
	}
	cout << cnt << endl;

	return 0;
}
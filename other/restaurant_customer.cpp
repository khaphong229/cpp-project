#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector <pair<int,int>> p;
	for (int i = 0; i < n; ++i)
	{
		int a,b;
		cin >> a >> b;
		p.push_back({a,1});
		p.push_back({b,-1});
	}
	sort(p.begin(),p.end());
	int cnt=0,max_val=0;
	for (int i = 0; i < p.size(); ++i)
	{
		cnt+=p[i].second;
		max_val=max(max_val,cnt);
	}
	cout << max_val << endl;
	return 0;
}
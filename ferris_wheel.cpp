#include <bits/stdc++.h>
using namespace std;

int solve(int n, int x, vector<int> a){
	int gondolas=0;
	sort(a.begin(),a.end());
	int l=0, r=n-1;
	while(l<=r){
		if(a[l]+a[r]<=x){
			l++;
			r--;
		}else{
			r--;
		}
		gondolas++;
	}
	return gondolas;
}

int main()
{
	int n,x;
	cin >> n >> x;
	vector <int> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int result=solve(n,x,a);
	cout << result << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a){
	sort(a.begin(),a.end());
	int cnt=1;
	for (int i=1;i<a.size();i++){
		if(a[i]!=a[i-1]){
			cnt++;
		}
	}
	return cnt;
}

int main()
{
	int n;
	cin >> n;
	vector <int> a(n);
	for (int i=0;i<n;i++){
		cin >> a[i];
	}
	int result=solve(a);
	cout << result << endl;
	return 0;
}
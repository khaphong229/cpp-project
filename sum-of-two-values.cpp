#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n,x;
	cin >> n >> x;
	vector<pair<int,int>> a;
	for (int i = 0; i < n; ++i)
	{
		int k;
		cin >> k;
		a.push_back({k,i+1});
	}
	sort(a.begin(),a.end());
	int l=0, r=n-1;
	while(l<r){
		if(a[l].first+a[r].first==x){
			cout << a[l].second << ' ' << a[r].second << endl;
			return 0;
		}else if(a[l].first+a[r].first>x){
			r--;
		}else{
			l++;
		}
	}
	cout << "IMPOSSIBLE" << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, m;
int a[550];
bool cmp(const pair<int, int> &a, const pair <int, int> &b){
	if(a.second != b.second){
		return a.second>b.second;
	}
	return a.first<b.first;
}
int solve(int n, int m, int a[]){
	unordered_map <int, int> b;
	for (int i=0; i<n; i++){
		b[a[i]]++;
	}
	vector<pair<int, int>> c(b.begin(), b.end());
	sort(c.begin(), c.end(), cmp);
	if (c.size()<2){
		return -1;
	}

	for (int i=1; i<c.size(); i++){
		if(c[i].second < c[0].second){
			return c[i].first;
		}
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i=0; i<n; i++){
    	cin >> a[i];
    }
    int ans=solve(n, m, a);
    if (ans==-1) cout << "NONE";
    else cout << ans;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, m;
vector <pair<int, int>> g[N];
vector<int> path;
const ll INF = 1e18;

vector<ll> solve(int s) {
	vector <ll> d(n + 1, INF);
	vector<int> p(n+1, -1);
	d[s] = 0;
	priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
	q.push({0, s});
	while (!q.empty()) {
		ll kc = q.top().first;
		int u = q.top().second;
		q.pop();
		if (kc > d[u]) continue;
		for (auto it : g[u]) {
			int v = it.first;
			int w = it.second;
			if (d[v] > d[u] + w) {
				d[v] = d[u] + w;
				p[v]=u;
				q.push({d[v], v});
			}
		}
	}
	
	if(s==1){
		int cur=n;
		while(cur!=-1){
			path.push_back(cur);
			cur=p[cur];
		}
		reverse(path.begin(), path.end());
	}
	return d;
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
    	int x, y, d;
    	cin >> x >> y >> d;
    	g[x].push_back({y, d});
    	g[y].push_back({x, d});

    }
    vector<ll> ans=solve(1);
    ll shortest_path=ans[n];
    vector<int> res;
    for(int i=2; i<n; i++){
    	if(find(path.begin(), path.end(), i)==path.end()){
    		res.push_back(i);
    	}
    }
    cout << res.size() << ln;
    for(int x:res){
    	cout << x << ln;
    }
	return 0;
}

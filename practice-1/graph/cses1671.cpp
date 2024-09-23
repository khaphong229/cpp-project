#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(int i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(int i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
 
int n, m;
vector<pair<int, int>> adj[N];
const ll INF = 1e18;
 
void dijkstra(int s) {
    vector<ll> d(n+1, INF);
    d[s] = 0;
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> q;
    q.push({0, s});
 
    while(!q.empty()) {
        ll kc = q.top().first;
        int u = q.top().second;
        q.pop();
        if(kc > d[u]) continue;
        for(auto it : adj[u]) {
            int v = it.first;
            int w = it.second;
            if(d[v] > d[u] + w) {
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }
 
    ff(i, 1, n) {
        if(d[i] == INF) cout << -1 << ' ';
        else cout << d[i] << ' ';
    }
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> n >> m;
    fff(i, 0, m) {
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y, w});
    }
 
    dijkstra(1);
 
    return 0;
}
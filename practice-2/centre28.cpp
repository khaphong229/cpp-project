#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
ll n, m;
vector<pair<ll, ll>> g[N];
const ll INF = 1e18;

vector<ll> solve(ll s, vector<ll> &P) {
    vector<ll> d(n + 1, INF);
    d[s] = 0;
    P[s] = 1;
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
    q.push({0, s});
    while (!q.empty()) {
        ll kc = q.top().first;
        ll u = q.top().second;
        q.pop();
        if (kc > d[u]) continue;
        for (auto it : g[u]) {
            ll v = it.first;
            ll w = it.second;
            if (d[v] > d[u] + w) {
                d[v] = d[u] + w;
                P[v] = P[u];
                q.push({d[v], v});
            } else if (d[v] == d[u] + w) {
                P[v] = (P[v] + P[u]) % mod;
            }
        }
    }
    return d;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (ll i = 0; i < m; i++) {
        ll x, y, d;
        cin >> x >> y >> d;
        g[x].push_back({y, d});
        g[y].push_back({x, d});
    }
    vector<ll> P(n + 1, 0), Q(n + 1, 0);
    vector<ll> d1 = solve(1, P);
    vector<ll> dn = solve(n, Q);
    ll shortest_path = d1[n];
    vector<ll> res;
    for (ll i = 2; i < n; i++) {
        if (d1[i] + dn[i] > shortest_path) {
            res.push_back(i);
        } else if ((P[i] * Q[i]) % mod < P[n]) {
            res.push_back(i);
        }
    }
    cout << res.size() << ln;
    for (ll x : res) {
        cout << x << ln;
    }
    return 0;
}
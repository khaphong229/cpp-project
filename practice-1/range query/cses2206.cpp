#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const ll mod = 1e9 + 7;
const ll INF = LLONG_MAX; // Define a large value for infinity

ll n, q; 
ll p[N];
ll up[N * 4];
ll down[N * 4];

void build(ll *t, int v, int l, int r) {
    if (l == r) {
        t[v] = p[l];
    } else {
        int m = (l + r) / 2;
        build(t, v * 2, l, m);
        build(t, v * 2 + 1, m + 1, r);
        t[v] = min(t[v * 2], t[v * 2 + 1]);
    }
}

ll get(ll *t, int v, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return t[v];
    } else if (r < x || l > y) {
        return INF;    
    }
    int m = (l + r) / 2;
    return min(get(t, v * 2, l, m, x, y), get(t, v * 2 + 1, m + 1, r, x, y));
}

void update(ll *t, int v, int l, int r, int pos, ll val) {
    if (l == r) {
        t[v] = val;
    } else {
        int m = (l + r) / 2;
        if (pos <= m) {
            update(t, v * 2, l, m, pos, val);
        } else {
            update(t, v * 2 + 1, m + 1, r, pos, val);
        }
        t[v] = min(t[v * 2], t[v * 2 + 1]);
    }
}

void pull(int i) {
    update(up, 1, 1, n, i, p[i] + i);
    update(down, 1, 1, n, i, p[i] - i);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }

    build(up, 1, 1, n);
    build(down, 1, 1, n);
    
    for (int i = 1; i <= n; i++) {
        pull(i);
    }

    while (q--) {
        int type;
        cin >> type;
        
        if (type == 2) {
            int k;
            cin >> k;
            ll d = get(down, 1, 1, n, 1, k) + k;
            ll u = get(up, 1, 1, n, k, n) - k;
            cout << min(d, u) << ln;
        } else {
            int k;
            ll x;
            cin >> k >> x;
            p[k] = x;
            pull(k);
        }
    }
    
    return 0;
}

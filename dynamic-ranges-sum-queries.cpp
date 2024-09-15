#include <bits/stdc++.h>
using namespace std;
#define ff(i, a, b) for(ll i = a, _b = b; i <= _b; i++)
#define fff(i, a, b) for(ll i = a, _b = b; i < _b; i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, q;
int a[N];
ll t[4*N];

void build(int v, int l, int r) {
    if (l == r) {
        t[v] = a[l];
    } else {
        int m = (l + r) / 2;
        build(v * 2, l, m);
        build(v * 2 + 1, m + 1, r);
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}

ll sum(int v, int l, int r, int x, int y) {
    if (x > r || y < l) {
        return 0;
    }
    if (x <= l && r <= y) {
        return t[v];
    }
    int m = (l + r) / 2;
    return sum(v * 2, l, m, x, y) + sum(v * 2 + 1, m + 1, r, x, y);
}

void update(int v, int l, int r, int pos, int val) {
    if (l == r) {
        t[v] = val;
    } else {
        int m = (l + r) / 2;
        if (pos <= m) {
            update(v * 2, l, m, pos, val);
        } else {
            update(v * 2 + 1, m + 1, r, pos, val);
        }
        t[v] = t[v * 2] + t[v * 2 + 1];
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    ff(i, 1, n) {
        cin >> a[i];
    }
    build(1, 1, n);
    while (q--) {
        int z, x, y;
        cin >> z >> x >> y;
        if (z == 1) {
            update(1, 1, n, x, y);
        } else if (z == 2) {
            cout << sum(1, 1, n, x, y) << ln;
        }
    }
    return 0;
}

#include <bits/stdc++.h>

const int N = 2e5 + 8;

int f[N][20];

using namespace std;

int answer(int l, int r) {
    int d = log2(r - l + 1);
    int p = 1 << d;
    return min(f[l][d], f[r - p + 1][d]);
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> f[i][0];
    }
    for (int d = 1; d < 20; d++) {
        // 2^(d-1)
        int p = 1 << (d - 1);
        for (int i = 1; i <= n; i++) {
            f[i][d] = f[i][d - 1];
            if (i + p <= n) {
                f[i][d] = min(f[i][d], f[i + p][d - 1]);
            }
        }
    }
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << answer(l, r) << endl;
    }
}

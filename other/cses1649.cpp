#include <bits/stdc++.h>

using namespace std;

const int N = 2e5 + 8;
int tree[N * 4];
int a[N];

// Khởi tạo cây
void init(int k, int l, int r) {
    if (l == r) {
        tree[k] = a[l];
    } else {
        int m = (l + r) / 2;
        init(k * 2, l, m);
        init(k * 2 + 1, m + 1, r);
        tree[k] = min(tree[k * 2], tree[k * 2 + 1]);
    }
}

// Cập nhật cây
void update(int k, int l, int r, int i, int v) {
    if (l == i && r == i) {
        tree[k] = v;
        return;
    }
    if (l > i || r < i) {
        return;
    }
    int m = (l + r) / 2;
    update(k * 2, l, m, i, v);
    update(k * 2 + 1, m + 1, r, i, v);
    tree[k] = min(tree[k * 2], tree[k * 2 + 1]);
}

// Truy vấn
int get(int k, int l, int r, int x, int y) {
    if (l >= x && r <= y) {
        return tree[k];
    }
    if (l > y || r < x) {
        return INT_MAX;
    }
    int m = (l + r) / 2;
    return min(get(k * 2, l, m, x, y), get(k * 2 + 1, m + 1, r, x, y));
}

int main() {
    ios::sync_with_stdio(false);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    init(1, 1, n);
    while (q--) {
        int c, a, b;
        cin >> c >> a >> b;
        switch (c) {
            case 1: {
                update(1, 1, n, a, b);
                break;
            }
            case 2: {
                cout << get(1, 1, n, a, b) << endl;
                break;
            }
        }
    }
}
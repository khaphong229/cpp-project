#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
long long a[MAXN], pref[MAXN];
int n;
long long L, R;

map<long long, int> mp;
int m;

int tree[4 * MAXN];

void update(int node, int left, int right, int pos, int val) {
    if (left == right) {
        tree[node] += val;
        return;
    }
    int mid = (left + right) / 2;
    if (pos <= mid)
        update(2 * node, left, mid, pos, val);
    else
        update(2 * node + 1, mid + 1, right, pos, val);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int query(int node, int left, int right, int qleft, int qright) {
    if (qleft > right || qright < left) return 0;
    if (qleft <= left && right <= qright) return tree[node];
    int mid = (left + right) / 2;
    return query(2 * node, left, mid, qleft, qright) +
           query(2 * node + 1, mid + 1, right, qleft, qright);
}

int get_pos(long long x) {
    return mp[x];
}

long long count_subarrays(long long X) {
    memset(tree, 0, sizeof(tree));
    long long result = 0;
    update(1, 1, m, get_pos(0), 1);
    for (int i = 1; i <= n; i++) {
        int pos = get_pos(X - pref[i]);
        result += query(1, 1, m, 1, pos);
        update(1, 1, m, get_pos(pref[i]), 1);
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> L >> R;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
        mp[pref[i]] = 0;
        mp[L - 1 - pref[i]] = 0;
        mp[R - 1 - pref[i]] = 0;
    }
    mp[0] = 0;
    
    for (auto &x : mp) {
        x.second = ++m;
    }

    long long answer = count_subarrays(R) - count_subarrays(L - 1);
    cout << answer << endl;

    return 0;
}
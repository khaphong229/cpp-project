#include <bits/stdc++.h>
const int N = 1e5 + 8;

int a[N];
using namespace std;

// bo nho stack 10MB
// bo nho heap

void merge_sort(int l, int r) {
    if (l >= r) {
        return;
    }
    int m = (l + r) / 2;
    merge_sort(l, m);
    merge_sort(m + 1, r);
    vector<int> c;
    int i = l, j = m + 1;
    while (i <= m && j <= r) {
        if (a[i] <= a[j]) {
            c.push_back(a[i]);
            i += 1;
        } else {
            c.push_back(a[j]);
            j += 1;
        }
    }

    while (i <= m) {
        c.push_back(a[i]);
        i += 1;
    }
    while (j <= r) {
        c.push_back(a[j]);
        j += 1;
    }
    for (int k = l; k <= r; k++) {
        a[k] = c[k - l];
    }
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cerr << "STILL OK" << endl;
    sx_tron(0, n - 1);
    cerr << "STILL OK" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll res=0;
void find(vector<ll> &x, int l, int r, ll x_min, ll x_max) {
    if (l<=r) {
        int m=(l+r)/2;
        if (x[m]>=x_min&&x[m]<=x_max) {
            res+=1;
        }
        find(x,l,m-1, x_min, x[m]-1);
        find(x, m+1, r, x[m]+1, x_max);
    }
}

int main() {
    int N;
    ll m, a, c, X0;
    cin >> N >> m >> a >> c >> X0;
    vector<ll> X(N+5);
    X[0]=X0;
    for (int i=1; i<=N; i++) {
        X[i] = (a*X[i-1]+c)%m;
    }
    find(X, 1, N, 0, LLONG_MAX);
    cout << res << endl;
    return 0;
}

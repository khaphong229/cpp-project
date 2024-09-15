#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int i = a; i <= b; i++)
const int MAXN = 100005;

ll a[MAXN], b[MAXN];
pair<ll, int> diff[MAXN];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    int n;
    cin >> n;
    
    FOR(i, 1, n) cin >> a[i];
    FOR(i, 1, n) cin >> b[i];
    
    FOR(i, 1, n) {
        diff[i] = {a[i] - b[i], i};
    }
    
    sort(diff + 1, diff + n + 1, greater<pair<ll, int>>());
    
    ll sum_a = 0, sum_b = 0;
    int res = 0;
    
    FOR(i, 1, n) {
        sum_a += a[diff[i].second];
        sum_b += b[diff[i].second];
        if (sum_a >= sum_b) {
            res = i;
        }
    }
    
    cout << res << endl;
    
    return 0;
}
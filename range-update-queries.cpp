#include <bits/stdc++.h>
using namespace std;

#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;

ll n, q;
ll a[N], BIT[N];

void update(int pos, ll val) {
    for (; pos <= n; pos += pos & (-pos)) {
        BIT[pos] += val;
    }
}

ll query(int pos) {
    ll sum = 0;
    for (; pos > 0; pos -= pos & (-pos)) {
        sum += BIT[pos];
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> q;
    
    ff(i, 1, n) {
        cin >> a[i];
    }
    
    // Process the queries
    while (q--) {
        int type;
        cin >> type;
        
        if (type == 1) {
            int a, b;
            ll u;
            cin >> a >> b >> u;
            update(a, u);
            if (b + 1 <= n) {
                update(b + 1, -u);
            }
        } else if (type == 2) {
            int k;
            cin >> k;
            ll original_value = a[k];
            ll increment = query(k);
            cout << original_value + increment << endl;
        }
    }
    
    return 0;
}

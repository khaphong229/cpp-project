#include <bits/stdc++.h>
using namespace std;
 
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod=1e9+7;

int n, q;
int a[N];
ll BIT[N];
vector<int> memo(N, -1);

ll fibo(int n) {
  if (n >= N) return 0;
    if (memo[n]!=-1) {
        return memo[n];
    }
    if (n<=1) {
        return n;
    }
    memo[n]=fibo(n - 1)+fibo(n - 2);
    return memo[n];
}
 
void update(int pos, ll val) {
    for (; pos <= n; pos += pos & (-pos)) {
        BIT[pos]=(BIT[pos]+val+mod)%mod;
    }
}
 
ll query(int pos) {
    ll sum = 0;
    for (; pos > 0; pos -= pos & (-pos)) {
        sum=(sum+BIT[pos])%mod;
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
            int l, r;
            cin >> l >> r;
            ll total=0;
            for(int i=l; i<=r; i++){
              ll original_value = a[i];
              ll increment = query(i);
              int x= (original_value+increment)%mod;
              total=(total+fibo(x))%mod;
            }
            cout << total << ln;
        }
    }
    
    return 0;
}
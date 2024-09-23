#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
ll a[N], d[N];
ll n, q;
ll x, y;
int main(){
    cin >> n >> q;
    for(ll i=1; i<=n; i++){
        cin >> a[i];
    }
    d[1]=a[1];
    for(ll i=2;i<=n; i++){
        d[i]=a[i]+d[i-1];
    }
    while(q--){
        cin >> x >> y;
        cout << d[y]-d[x-1] << endl;
    }
    return 0;
}
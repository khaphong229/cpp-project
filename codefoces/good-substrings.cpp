#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

ll n, l, r;
ll x;
vector<vector<ll>> t;
vector<ll> a;

void build(int v, int l, int r){
    if(l==r){
        t[v]={a[l]};
        return;
    }else{
        int m=(l+r)/2;
        build(v*2, l, m);
        build(v*2+1. m+1, r);
        t[v].resize(t[v*2].size()+t[v*2+1].size());
        merge(t[v*2].begin(), t[v*2].end(), t[v*2+1].begin(), t[v*2+1].end(), t[v].begin());
    }
}

ll get(int v, int l, int r, int u, int v, int x, int y){
    if(v<l || u>r){
        return 0;
    }else if(u<=l && r<=v){
        ll res=upper_bound(t[v].begin(), t[v].end(), y) - lower_bound(t[v].begin(), t[v].end(), x);
        return res;
    }
    int m=(l+r)/2;
    return get(v*2, l, m, u, v, x, y) + get(v*2+1, m+1, r, u, v, x, y);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> l >> r;
    t.resize(400006);
    a.resize(400006);
    for(int i=1; i<n; i++){
        cin >> x;
        a[i]=a[i-1]+x;
    }
    build(1, 1, n);
    ll ans=0;
    for(int i=1; i<=n; i++){
        ans+=get(1, 1, n, i, n, a[i-1]+l, a[i-1]+r);
    }
    cout << res;
    return 0;
}
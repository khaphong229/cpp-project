#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
ll n, q;
ll a[N];
ll t[N*4];
void build(int v, int l, int r){
    if(l==r){
        t[v]=a[l];
    }else{
        int m=(l+r)/2;
        build(v*2, l, m);
        build(v*2+1, m+1, r);
        t[v]=min(t[v*2], t[v*2+1]);
    }
}
int get(int v, int l, int r, int x, int y){
    if(l>=x && r<=y){
        return t[v];
    }else if(r<x || y<l){
        return INT_MAX;
    }
    int m=(l+r)/2;
    return min(get(v*2, l, m, x, y), get(v*2+1, m+1, r, x, y));
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    build(1, 1, n);
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << get(1, 1, n, l, r) << endl;
    }
	return 0;
}
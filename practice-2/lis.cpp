#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 3e4+5;
const int mod = 1e9 + 7;
int n;
ll a[N];
ll b[N];
ll t[N*4];
map<int, int> mp;
int m;

void build(int v, int l, int r){
    if(l==r){
        t[v]=0;
    }else{
        int m=(l+r)/2;
        build(v*2, l, m);
        build(v*2+1, m+1, r);
        t[v]=max(t[v*2], t[v*2+1]);
    }
}
ll get(int v, int l, int r, int x, int y){
    if(l>=x && r<=y){
        return t[v];
    }else if(r<x || l>y){
        return 0;
    }
    int m=(l+r)/2;
    return max(get(v*2, l, m, x, y), get(v*2+1, m+1, r, x, y));
}
void update(int v, int l, int r, int pos, int val){
    if(l==r){
        t[v]=val;
    }else{
        int m=(l+r)/2;
        if(pos<=m){
            update(v*2, l, m, pos, val);
        }else{
            update(v*2+1, m+1, r, pos, val);
        }
        t[v]=max(t[v*2], t[v*2+1]);
    }
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    //nén số
    for(int i=1; i<=n; i++){
        cin >> a[i];
        mp[a[i]]=1;
    }
    for(auto &v: mp){
        v.second=++m;
    }
    for(int i=1; i<=n; i++){
        a[i]=mp[a[i]];
    }
    build(1, 1, m);
    for(int i=1; i<=n; i++){
        ll res=get(1, 1, m, 1, a[i]-1)+1;
        update(1, 1, m, a[i], res);
    }
    cout << t[1] << endl;
	return 0;
}
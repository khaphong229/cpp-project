#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
int n, q;
int a[N];
ll t[N*4], lazy[N*4];
void build(int v, int l, int r){
  if(l==r){
    t[v]=a[l];
    return;
  }
  int m=(l+r)/2;
  build(v*2, l, m);
  build(v*2+1, m+1, r);
  t[v]=max(t[v*2], t[v*2+1]);
}
void push(int v){
  if(lazy[v]!=0){
    t[v*2]+=lazy[v];
    t[v*2+1]+=lazy[v];
    lazy[v*2]+=lazy[v];
    lazy[v*2+1]+=lazy[v];
    lazy[v]=0;
  }
}
ll get(int v, int l, int r, int x, int y){
  if(x<=l && y>=r) return t[v];
  if(x>r || l>y) return LLONG_MIN;
  int m=(l+r)/2;
  push(v);
  return max(get(v*2, l, m, x, y), get(v*2+1, m+1, r, x, y));
}
void update(int v, int l, int r, int x, int y, int val){
  if(x<=l && y>=r){
    t[v]+=val;
    lazy[v]+=val;
    return;
  }
  if(x>r || l>y) return;
  int m=(l+r)/2;
  push(v);
  update(v*2, l, m, x, y, val);
  update(v*2+1, m+1, r, x, y, val);
  t[v]=max(t[v*2], t[v*2+1]);
}
int main() 
{
    cin >> n;
    for (int i=1; i<=n; i++){
      cin >> a[i];
    }
    build(1, 1, n);
    cin >> q;
    while(q--){
      int type, l, r, x;
      cin >> type;
      if(type==1){
        cin >> l >> r >> x;
        update(1, 1, n, l, r, x);
      }else if(type==2){
        cin >> l >> r;
        cout << get(1, 1, n, l, r) << endl;
      }
    }
    
    return 0;
}
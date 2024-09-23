#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b,i) for(int i = a ; i <= b ; i++)
#define sekidoCode int main()
#define sp ios_base::sync_with_stdio(0);cin.tie(0)
#define p_b(v) push_back(v)
#define fi first
#define se second
const int MOD = 1e9 + 7 ;
vector<vector<ll>>t;
vector<ll>s;

void build(int id, int l,int r) {
  if (l == r) {
    t[id] = {s[l]};
    return ;
  }
  int m = (l + r) >> 1;
  build(id * 2, l, m);
  build(id * 2 + 1, m + 1, r);
  t[id].resize(t[id * 2].size() + t[id * 2 + 1].size());
  merge(t[id * 2].begin(), t[id * 2].end(), t[id * 2 + 1].begin(), t[id * 2 + 1].end(), t[id].begin());
}

ll get(int id,int l,int r,int u,int v,ll x, ll y) {
  if(v < l || u > r) {
    return 0;
  }
  if(u <= l && r <= v) {
    ll num = upper_bound(t[id].begin(), t[id].end(), y) - lower_bound(t[id].begin(), t[id].end(), x);
    return num;
  }
  int m = (l + r) >> 1;
  return get(id * 2, l, m, u, v,x ,y) + get(id * 2 + 1, m + 1, r, u ,v ,x ,y);
}

ll x;

sekidoCode {
  sp;
  int n,l,r;
  cin >> n >> l >> r;
  s.resize(n + 1);
  t.resize(4 * n);
  FOR(1,n,i) {
    cin >> x;
    s[i] = s[i - 1] + x;
  }
  build(1,1,n);
  long long res = 0;
  FOR(1,n,i) {
    res += get(1,1,n,i,n,s[i - 1] + l,s[i - 1] + r);
  }
  cout << res;
  return 0;
}
#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
int n;
ll a[N];
vector<ll> g[N];
int res[N];
void dfs(int s, int e){
  res[s]=0;
  for(int u : g[s]){
    if(u!=e){
      dfs(u, s);
      res[s]+=res[u]+1;
    }
  }
}
int main() 
{
    cin >> n;
    for(int i=2; i<=n; i++){
      cin >> a[i];
      g[a[i]].push_back(i);
    }
    dfs(1, 0);
    for(int i=1; i<=n; i++){
      cout << res[i] << ' ';
    }
    return 0;
}
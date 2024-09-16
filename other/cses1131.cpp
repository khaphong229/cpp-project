#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
int n;
vector<ll> g[N];
int d[N];
int res;
void dfs(int u, int p){
  for(int v : g[u]){
    if(v!=p){
      d[v]=d[u]+1;
      dfs(v, u);
    }
  }
}
int find(){
  int tmp=0;
  int max_val=INT_MIN;
  for(int i=1; i<=n; i++){
    if(d[i]>max_val){
      max_val=d[i];
      tmp=i;
    }
  }
  return tmp;
}
int main() 
{
    cin >> n;
    for(int i=0; i<n-1; i++){
      int x, y;
      cin >> x >> y;
      g[x].push_back(y);
      g[y].push_back(x);
    }
    dfs(1, 0);
    int uu = find();
    for(int i=1; i<=n; i++){
      d[i]=0;
    }
    dfs(uu, 0);
    auto *ans=max_element(d+1, d+n+1);
    cout << *ans << endl;
    return 0;
}
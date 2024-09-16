#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

///////////////
int n, m;
vector<int> g[N];
bool visited[N];
queue<int> q;
int kc[N];
int ans[N];

void solve(int u){
  q.push(u);
  visited[u]=true;
  while(!q.empty()){
    int i=q.front();
    q.pop();
    for(int v : g[i]){
      if(!visited[v]){
        kc[v]=kc[i]+1;
        visited[v]=true;
        ans[v]=i;
        q.push(v);
      }
    }
  }
  
  if(!visited[n]){
    cout << "IMPOSSIBLE" << ln;
    return;
  }
  
  int tmp=n;
  int k=kc[n];
  vector<int> res(k+1);
  for(int i=k; i>=0; i--){
    res[i]=tmp;
    tmp=ans[tmp];
  }
  cout << k+1 << ln;
  ff(i, 0, k){
    cout << res[i] << ' ';
  }
}
///////////////

int main(){
	ios_base::sync_with_stdio(0);
  cin.tie(0);

///////////////
  cin >> n >> m;
  fff(i, 0, m){
    int a, b;
    cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  solve(1);
///////////////

	return 0;
}
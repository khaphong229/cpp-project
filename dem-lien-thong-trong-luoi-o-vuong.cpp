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
char a[1001][1001];
bool visited[1001][1001];
int dx[4]={-1, 0, 0, 1};
int dy[4]={0, -1, 1, 0};

void dfs(int i, int j){
  visited[i][j]=true;
  for(int k=0; k<4; k++){
    int i1=i+dx[k];
    int j1=j+dy[k];
    if(i1>=1 && i1<=n && j1>=1 && j1<=m && !visited[i1][j1] && a[i1][j1]=='.'){
      dfs(i1, j1);
    }
  }
}

void bfs(int i, int j){
  queue<pair<int, int>> q;
  q.push({i, j});
  visited[i][j]=true;
  while(!q.empty()){
    pair<int, int> top = q.front();
    q.pop();
    for(int k=0; k<4; k++){
      int i1=top.first+dx[k];
      int j1=top.second+dy[k];
      if(i1>=1 && i1<=n && j1>=1 && j1<=m && !visited[i1][j1] && a[i1][j1]=='.'){
          q.push({i1, j1});
          visited[i1][j1]=true;
      }
  }
}
}
///////////////

int main(){
	ios_base::sync_with_stdio(0);
  cin.tie(0);

///////////////
  cin >> n >> m;
  ff(i, 1, n){
    ff(j, 1, m){
      cin >> a[i][j];
    }
  }
  memset(visited, false, sizeof(visited));
  int cnt=0;
  ff(i, 1, n){
    ff(j, 1, n){
      if(a[i][j]=='.' && !visited[i][j]){
        bfs(i, j);
        cnt++;
      }
    }
  }
  cout << cnt << ln;
///////////////

	return 0;
}
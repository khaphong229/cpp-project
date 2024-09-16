#include <iostream>
#include <string>
using namespace std;
int n, m;
char a[1005][1005];
bool visited[1005][1005];
void dfs(int i, int j){
  if(visited[i][j] || a[i][j]=='#') return;
  visited[i][j]=true;
  if(i==0 || j==0 || i==n+1 || j==m+1) return;
  dfs(i+1,j);
  dfs(i-1,j);
  dfs(i,j+1);
  dfs(i,j-1);
}
int main() 
{
    cin >> n >> m;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=m; j++){
        cin >> a[i][j];
      }
    }
    int cnt=0;
    for(int i=1; i<=n; i++){
      for(int j=1; j<=m; j++){
        if(!visited[i][j] && a[i][j]=='.'){
          cnt++;
          dfs(i, j);
        }
      }
    }
    cout << cnt << endl;
    return 0;
}

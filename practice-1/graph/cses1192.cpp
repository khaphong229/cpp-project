#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
char a[1001][1001];
bool visited[1001][1001];
int n, m;
int dx[4]={-1, 0, 0, 1};
int dy[4]={0, -1, 1, 0};
void dfs(int i, int j){
    visited[i][j]=true;
    for(int k=0; k<4; k++){
        int i1=i+dx[k];
        int j1=j+dy[k];
        if(i1>=0 && i1<n && j1>=0 && j1<m && !visited[i1][j1] && a[i1][j1]=='.'){
            dfs(i1, j1);
        }
    }
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int cnt=0;
    memset(visited, false, sizeof(visited));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]=='.' && !visited[i][j]){
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;
	return 0;
}
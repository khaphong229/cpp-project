#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, m;
vector<int> g[N];
bool visited[N];
queue<int> q;
int d[N];
int ans[N];
void solve(int u){
    q.push(u);
    visited[u]=true;
    while(!q.empty()){
        int i=q.front();
        q.pop();
        for(int v:g[i]){
            if(!visited[v]){
                visited[v]=true;
                d[v]=d[i]+1;
                ans[v]=i;
                q.push(v);
            }
        }
    }
    if(!visited[n]){
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    int tmp=n;
    int k=d[n];
    vector<int> res;
    while(tmp!=1){
        res.push_back(tmp);
        tmp=ans[tmp];
    }
    res.push_back(1);
    reverse(res.begin(), res.end());
    cout << k+1 << endl;
    for(int x=0; x<=k; x++){
        cout << res[x] << ' ';
    }
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    solve(1);
	return 0;
}
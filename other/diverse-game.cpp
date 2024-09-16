#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

void solve(int n, int m, vector<vector<int>> &a){
  if(n==1 && m==1){
    cout << -1 << endl;
    return;
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<m-1; j++){
      swap(a[i][j], a[i][j+1]);
    }
  }
  for(int i=0; i<n-1; i++){
    a[i].swap(a[i+1]);
  }
  fff(i,0,n){
    fff(j,0,m){
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }
        solve(n, m, a);
    }

    return 0;
}

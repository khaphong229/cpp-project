#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 105;
const int mod = 1e9 + 7;

int n, option;
int a[N];
vector<vector<int>> dp(N+1, vector<int>(2, 0));

int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
  cin >> n >> option;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  dp[0][0]=1;
  for(int i=1; i<=n; i++){
    for(int j=0; j<2; j++){
      dp[i][j]=dp[i-1][j];
      dp[i][j]=(dp[i][j]+dp[i-1][j^(a[i-1]%2)])%mod;
    }
  }
  cout << dp[n][option];
  return 0;
}
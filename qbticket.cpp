#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
typedef long long ll;
int l1, l2, l3, c1, c2, c3;
int n;
int s, f;
int d[N];

ll solve(){
  if(s>f){
    swap(s, f);
  }
  vector<int> dp(N, INT_MAX);
  dp[s-1]=0;

  for(int i=s; i<f; i++){
    if(dp[i-1]==INT_MAX){
      continue;
    }
    for(int j=i+1; j<=f; j++){
      int ds=d[j-1]-d[i-1];
      if(ds>l3) break;
      int cost;
      if(ds<=l1){
        cost=c1;
      }else if(ds<=l2){
        cost=c2;
      }else{
        cost=c3;
      }
      dp[j-1]=min(dp[j-1], dp[i-1]+cost);
    }
  }
  return dp[f-1];
}

int main(){
  cin >> l1 >> l2 >> l3 >> c1 >> c2 >> c3;
  cin >> n;
  cin >> s >> f;
  for(int i=1;i<n;i++){
    cin >> d[i];
  }
  ll res=solve();
  cout << res;
  return 0;
}
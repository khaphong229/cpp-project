#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
ll solve(ll x, ll y){
  ll mx=max(y, x);
  if(mx%2==0){
    if(y==1){
      return mx*mx;
    }else if(x<mx){
      return solve(mx, mx)-(mx-x);
    }else if(x==mx){
      return (mx*mx-(y-1));
    }
  }else{
    if(x==1){
      return mx*mx;
    }else if(y<mx){
      return solve(mx, mx)-(mx-y);
    }else if(y==mx){
      return (mx*mx-(x-1));
    }
  }
}
int main() 
{
    cin >> t;
    while (t--){
      ll x, y;
      cin >> x >> y;
      cout << solve(x, y) << endl;
    }
    return 0;
}
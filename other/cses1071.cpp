#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
ll solve(ll x, ll y){
  ll res;
  pair<ll, ll> ans={x, y};
  ll mx=max(x, y);
  if(x==y) return mx*mx-mx+1;
  if(mx%2==0){
    if(y==1){
      return mx*mx;
    }
    ll mid=mx*mx-mx+1;
    pair<ll, ll> midd={mx, mx};
    if(midd.first==ans.first){
      res=mid+(midd.second-ans.second);
    }else if(midd.second==ans.second){
      res=mid-(midd.first-ans.first);
    }
  }else{
    if(x==1){
      return mx*mx;
    }
    ll mid=mx*mx-mx+1;
    pair<ll, ll> midd={mx, mx};
    if(midd.first==ans.first){
      res=mid-(midd.second-ans.second);
    }else if(midd.second==ans.second){
      res=mid+(midd.first-ans.first);
    }
  }
  return res;
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
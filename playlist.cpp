#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
const int N = 2e5 + 5;

///////////////
int n;
int a[N];
ll solve(){
  map<ll, ll> mp;
  ll l=0, ans=0;
  for(ll r=0;r<n;r++){
    if(mp.find(a[r])!=mp.end() && mp[a[r]]>=l){
      l=mp[a[r]]+1;
    }
    mp[a[r]]=r;
    ans=max(ans, r-l+1);
  }
  return ans;
}
///////////////

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

///////////////
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  cout << solve() << endl;
///////////////

  return 0;
}
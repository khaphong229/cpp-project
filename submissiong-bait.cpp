#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

void solve(int a[], int n){
  int maxVal=*max_element(a+1, a+n+1);
  int cnt=0;
  ff(i,1,n){
    if (a[i]==maxVal) cnt++;
  }
  string ans=(cnt%2==1) ? "YES" : "NO";
  cout << ans << ln;
}
int t;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    int a[n+1];
    for (int i=1; i<=n; i++){
      cin >> a[i];
    }
    solve(a, n);
  }
  return 0;
}

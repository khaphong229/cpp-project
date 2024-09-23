#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, k;
// dùng modular exponentiation
ll solve(int n, int k){
  int res=1;
  while(k>0){
    if(k%2==1){
      res=(res%mod*n%mod)%mod;
    }
    k/=2;
    n=(n%mod*n%mod)%mod;
  }
  return res;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  //cong thuc n^k
  ll res=solve(n, k);
  if(res<0) res+=mod;
  cout << "Số cấu hình chỉnh hợp lặp chập " << k << " của " << n << " là "  << res << endl;
  return 0;
}

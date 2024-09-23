#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 1e3+5;
const int mod = 1e9 + 7;
int n, k;
ll f[N][N];

//cong thuc C(n, k) = C(n-1, k-1) + C(n-1, k)
ll solve(int n ,int k){
  for(int i=0; i<=n; i++){
    for(int j=0; j<=i; j++){
      if(i==j || j==0){
        f[i][j]=1;
      }else{
        f[i][j]=((f[i-1][j-1]%mod)+(f[i-1][j]%mod))%mod;
      }
    }
  }
  return f[n][k];
}

int main() 
{
    cin >> n >> k;
    long long res=solve(n, k);
    cout << "Số cấu hình tổ hợp chập " << k << " của " << n << " là "  << res << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 1e6+5;
const int mod = 1e9 + 7;

//cong thuc: D(n)=n! [1-1/1!+1/2!-1/3!+...+(-1)^n*(1/n!)]

int n;
ll gt[N];
void gthua(){
  gt[0]=1;
  gt[1]=1;
  for (int i=2; i<N; i++){
    gt[i]=(gt[i-1]%mod * i%mod)%mod;
  }
}

ll luythua(ll x, ll y){
  ll res=1;
  while(y>0){
    if(y%2==1){
      res=(res%mod*x%mod)%mod;
    }
    y/=2;
    x=(x%mod*x%mod)%mod;
  }
  return res;
}

int main(){
  ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    gthua();
    ll tmp=0;
    ll dau=1;
    for(int i=0; i<=n; i++){
      ll nghichdao=luythua(gt[i], mod-2);
     tmp=(tmp+dau*nghichdao)%mod;
     dau=-dau;
    }
    ll res=(gt[n]%mod * tmp%mod)%mod;
    if(res<0) res+=mod;
    cout << res;
  return 0;
}

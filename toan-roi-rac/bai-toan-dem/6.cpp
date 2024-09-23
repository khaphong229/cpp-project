#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int n, k;
int prime[k+1];

ll solve(){
  ll res=0;
  for(int st=1; st<(1<<k); st++){
    ll tmp=1;
    int bits=0;
    for(int i=0; i<k; i++){
      if(st&(1<<i)){
        if(tmp>n/prime[i]){
          tmp=n+1;
          break;
        }
        tmp*=prime[i];
        bits++;
      }
    }
    if(tmp<=n){
      if(bits%2==1){
        res+=n/product;
      }else{
        res-=n/product;
      }
    }
  }
  return n-res;
}





#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 1e6;
const int mod = 1e9 + 7;
int n;
ll d[30];

string build(int k){
  if (k == 0) return "acc";
    string f=build(k - 1);
    string mid(k + 2, 'c');
    mid="a"+mid;
    return f+mid+f;
}
char solve(int k, int n){
  if(k==0) return "acc"[n-1];
    ll f=d[k-1];
    ll mid=k+3;
    if(n<=f){
      return solve(k-1, n);
    }else if(n<=f+mid){
      if(n==f+1){
        return 'a';
      }else{
        return 'c';
      }
    }else{
      return solve(k-1, n-f-mid);
    }
  }
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    d[0] = 3;

    cin >> n;
    for (int i = 1; i < 30; i++) {
        d[i]=d[i-1]*2+i+3;
    }
    int l=0, r=0;
    for (int i=0;i<30; i++) {
        if(n<=d[i]){
          cout << solve(i, n);
          break;
        }
    }
    return 0;
}


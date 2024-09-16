#include <bits/stdc++.h>
using namespace std;
int t;
long long solve(long long n){
  if(n==1) return 1;
  long long f0=0, f1=1;
  for(long long i=0; i<n*n; i++){
    long long tmp=f1;
    f1=(f0+f1)%n;
    f0=tmp;
    if(f0==0 && f1==1){
      return i+1;
    }
  }
  return 0;
}
int main() 
{
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
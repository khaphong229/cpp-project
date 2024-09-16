#include <bits/stdc++.h>
using namespace std;
int t;
int gcd(int a, int b){
  if (b==0) return a;
  return gcd(b, a%b);
}
int main(){
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) cin >> a[i];
    int ans=0;
    for (int i=0; i<n; i++){
      for (int j=i+1; j<n; j++){
        int uc=gcd(a[i], a[j]);
        ans=max(ans, uc);
      }
    }
    cout << ans << endl;
  }
}
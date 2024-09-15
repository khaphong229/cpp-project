/// tle =(( 
/// dùng tknp thì ko ra huhuhu

#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
typedef long long ll;
int n , l , r;
int a[N];
int d[N];
int cnt=0;

int main(){
  cin >> n >> l >> r;
  for(int i = 1 ; i <= n ; i++){
  cin >> a[i];
  }
  for(int i = 1 ; i <= n ; i++){
  d[i]=d[i-1]+a[i];
  }
  for(int i = 1 ; i <= n ; i++){
    for(int j = i ; j <= n ; j++){
      int k = d[j]-d[i-1];
      if(k >= l && k <= r){
         cnt++;
      }
    }
  }
  cout << cnt;
  return 0;
}

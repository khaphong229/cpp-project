#include <bits/stdc++.h>
using namespace std;
int n;
int cnt=0;
const int N=1e6+1;
bool prime[N];
void sang(){
  memset(prime, true, sizeof(prime));
  prime[0]=false;
  prime[1]=false;
  for(int i=2; i*i<N; i++){
    if(prime[i]){
      for(int j=i*i; j<N; j+=i){
        prime[j]=false;
      }
    }
  }
}
int main() 
{
    cin >> n;
    sang();
    for(int i=0;i<=n;i++){
      for(int j=i; j<=n;j++){
        if(prime[i] && prime[j] && i+j==n){
          cnt++;
        }
      }
    }
    cout << cnt << endl;
    return 0;
}
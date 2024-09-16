#include <bits/stdc++.h>
using namespace std;

bool nt(int x) {
  for (int i = 2 ;  i*i <= x ; i++) {
    if (x%i==0) return 0 ;
  }
  return x >= 2 ;
}
int main() 
{
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL);
// snt();
int n;
cin>>n;
if(nt(n)) cout<<"YES";
else cout<<"NO";


    return 0;
}
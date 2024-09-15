#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define ll long long
bool check(ll a[] , int n) {
  
  for(int i = 2 ; i <=  n-1   ; i++) {
    cout << a[i] << endl;
    a[i] = a[i] - (a[i-1] * 2) ;
    a[i + 1] -= a[i-1] ;
    if (a[i] < 0 || a[i+1] <0) return 0;
    a[i-1] = 0  ;
  }
  int dem = 0 ;
  for(int i = 1 ; i <=  n ;i++ ) if (a[i] == 0) dem ++ ;
  if (dem != n) return 0;
  return 1;
}

void res() {
  ll a[200005] ; int n ;
  cin>> n;
  for(int i = 1 ; i <= n; i++) cin >>a[i] ;
  
  if (check(a,n)) cout<<"YES";
  else cout<<"NO" ;
  cout<<'\n';
}

int main(){
	int t;
	cin>>t;
	while(t--){
  res();
}

	return 0;
}
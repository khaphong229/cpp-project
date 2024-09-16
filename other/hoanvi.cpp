#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n;
int a[N];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
  cin >> n;
  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  int cnt=1;
  int tmp=a[0];
  for (int i=1; i<n; i++){
    if(a[i]<=tmp) {
      cnt++;
      tmp=a[i];
    }
  }
  cout << cnt << endl;
	return 0;
}

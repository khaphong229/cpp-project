#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

///////////////
int n, x;
vector<pair<int, int>> a;
///////////////

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

///////////////
  cin >> n >> x;
  for (int i=0; i<n; i++){
    int k;
      cin >> k;
      a.push_back({k, i+1});
  }
  sort(a.begin(), a.end());
  for (int i=0; i<n-3; i++){
    for(int j=i+1; j<n-2; j++){
      int l=j+1;
      int r=n-1;
      int vf=x-a[i].first-a[j].first;
      while(l<r){
          if(a[l].first+a[r].first==vf){
              cout << a[i].second << ' ' << a[j].second << ' ' << a[l].second << ' ' << a[r].second << endl;
              return 0;
          }else if(a[l].first+a[r].first>vf){
              r--;
          }else{
              l++;
          }
      }
    }
  }
  cout << "IMPOSSIBLE" << endl;
///////////////

  return 0;
}
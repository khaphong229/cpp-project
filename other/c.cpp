#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
// vector<vector<char>> board(15, vector<char>(15));
int c[15];
int cc[30];
int cp[30];
int cnt=0;

void solve(int hang, int n){
  if(hang==n){
    cnt++;
    return;
  }
  for (int i=0; i<n; i++){
    if(c[i]==0 && cc[hang-i+n-1]==0 && cp[hang+i]==0){
      c[i]=1;
      cc[hang-i+n-1]=1;
      cp[hang+i]=1;
      solve(hang+1, n);
      c[i]=0;
      cc[hang-i+n-1]=0;
      cp[hang+i]=0;
    }
  }
}

int main(){
	ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  // for(int i=0; i<n; i++){
  //   for(int j=0; i<n;j++){
  //     board[i][j]='.';
  //   }
  // }
  int hang=0;
  solve(hang, n);
  cout << cnt << ln;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

string board[10];
int c[9];
int cc[15];
int cp[15];
int cnt=0;

void TRY(int hang){
    if(hang==8){
      cnt++;
      return;
    };
    for(int i=0; i<8; i++){
      if(c[i]==0 && cc[hang-i+7]==0 && cp[hang+i]==0 && board[hang][i]=='.'){
        c[i]=1;
        cc[hang-i+7]=1;
        cp[hang+i]=1;
        TRY(hang+1);
        c[i]=0;
        cc[hang-i+7]=0;
        cp[hang+i]=0;
      }
    }
}
    
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i=0; i<8; i++){
    cin >> board[i];
  }
  int hang=0;
  TRY(hang);
  cout << cnt << endl;
  return 0;
}

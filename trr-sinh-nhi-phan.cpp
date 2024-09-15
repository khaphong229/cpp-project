#include <bits/stdc++.h>
using namespace std;
int x[100];
string s;
int n;
bool check=false;

void sinh_ke_tiep(string s, int n) {
  int i=n-1;
  while(i>=0 && s[i]=='1'){
    s[i]='0';
    i--;
  }
  if(i!=-1){
    s[i]='1';
  }
  cout << "Xâu nhị phân kế tiếp là " << s << endl;
}
void ktao(){
  for(int i=1; i<=n; i++){
    x[i]=0;
  }
}
void sinh(){
  int i=n;
  while(i>=1 && x[i]==1){
    x[i]=0;
    i--;
  }
  if(i==0){
    check=true;
  }else{
    x[i]=1;
  }
}
int main() 
{
  cin >> s;
  n=s.length();
  sinh_ke_tiep(s, n);
  cout << "Tất cả các cấu hình " << endl;
  ktao();
  while(check==false) {
    for(int i=1; i<=n; i++){
      cout << x[i];
    }
    cout << endl;
    sinh();
  }
    return 0;
}
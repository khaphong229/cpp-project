#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
vector<int> ans;
void sinh(){
  for(int i=0; i<(1<<n); i++){
    int gray=i^(i>>1);
    for(int j=n-1; j>=0; j--){
      if(gray&(1<<j)){
        cout << 1;
      }else{
        cout << 0;
      }
    }
    cout << endl;
  }
}
int main() 
{
    cin >> n;
    sinh();
    return 0;
}
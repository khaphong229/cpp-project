#include <iostream>
#include <string>
using namespace std;
string s;
string k;
int cnt=0;
int main() 
{
    cin >> s;
    cin >> k;
    int n=s.size();
    int m=k.size();
    for(int i=0; i<=n-m; i++){
      string subs=s.substr(i, m);
      if(subs==k){
        cnt++;
      }
    }
    cout << cnt << endl;
    return 0;
}
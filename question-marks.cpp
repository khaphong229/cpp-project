#include <bits/stdc++.h>
#include <string>
using namespace std;
int t, n;
string s;
int a[105]={0};
unordered_map<char, int> res;
int main() 
{
    cin >> t;
    while(t--){
      cin >> n;
      cin >> s;
      for(char c:s){
        res[c]++;
      }
      int sum=0;
      for(char c:s){
        if(c!='?'){
          sum+=min(res[c],n);
          res[c]=0;
        }
      }
      cout << sum << endl;
    }
    return 0;
}
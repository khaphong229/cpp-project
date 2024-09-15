#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
string s, t;
int main() 
{
    cin >> s;
    cin >> t;
    unordered_map<char, char> a, b;
    int n=s.size();
    for(int i=0; i<n; i++){
      char ss=s[i];
      char tt=t[i];
      if(a.count(ss) && a[ss]!=tt){
        cout << "No";
        return 0;
      }
      if(b.count(tt) && b[tt]!=ss){
        cout << "No";
        return 0;
      }
      a[ss]=tt;
      b[tt]=ss;
    }
    cout << "Yes";
    return 0;
}
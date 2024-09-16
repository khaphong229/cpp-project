#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

void solve(string s) {
    map<char,int> mp;
    string ans="";
    for(int i=0;i<s.size();i++){
        mp[s[i]]+=1;
    }
    if(mp.size()==1){
        cout << "NO" << endl;
    }else{
        for(auto const&pair: mp) {
            for(int i=1;i<=pair.second;i++) {
            ans = ans + pair.first;
            }
          }
           cout<< "YES" <<'\n';
           cout<<ans <<'\n';
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define FOR(a,b,i) for(int i = a ; i <= b ; i++)
// #define sp ios_base::sync_with_stdio(0);cin.tie(0)
// // pair<int,int>p[105] ;
// void solve(string s) {
//   map<char,int> mp ;
//   string res = "" ;
//   FOR(0,s.size()-1,i) {
//     mp[s[i]] += 1 ;
//   }
//     if(mp.size() == 1) {
//       cout<< "NO" <<'\n';
//     }
//     else {
//       for(auto const&pair: mp) {
//         FOR(1,pair.second,i) {
//         res = res + pair.first ;
//         }
//       }
//        cout<< "YES" <<'\n';
//        cout<<res <<'\n';
//     }
// }
// int main() 
// {
//    sp ;
//   string s ;
//   int  t;
//   cin >> t ;
//   while (t--) {
//     cin >> s;
//     solve(s) ;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n;
int cnt=0;
int solve(int n){
    for (int i=1; i<=n; i++){
        string b=to_string(i);
        set<char> st;
        for (char s : b){
            st.insert(s);
        }
        if (st.size() <=2){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cout << solve(n) << endl;
    return 0;
}

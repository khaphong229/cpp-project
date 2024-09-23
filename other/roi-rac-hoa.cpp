#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n;
int a[N];
map<int, int> mp;
int m;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        mp[a[i]]=1;
    }
    for(auto &x : mp){
        x.second=++m;
    }
    for(int i=1; i<=n; i++){
        a[i]=mp[a[i]];
    }
    for(int i=1; i<=n; i++){
        cout << a[i] << ' ';
    }
	return 0;
}
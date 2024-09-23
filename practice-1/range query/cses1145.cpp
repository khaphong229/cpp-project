#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, mx;
int a[N], b[N];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    for(int i=1; i<=n; i++){
        int j=lower_bound(b+1, b+mx+1, a[i])-b-1;
        b[j+1]=a[i];
        mx=max(mx, j+1);
    }
    cout << mx;
	return 0;
}
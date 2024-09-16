#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int mod=1e9+7;
int main(){
	int n;
	cin >> n;
	int ans=1;
	for(int i=1;i<=n;i++){
		ans=(ans%mod)*(2%mod)%mod;
	}
	cout << ans << endl;
	return 0;
}
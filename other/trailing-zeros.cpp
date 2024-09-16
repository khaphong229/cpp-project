#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const ll mod=1e9+7;

/// numbers of 0s at the end of x! = numbers of 5s in x!
/// = x/5 + x/5^2 + ... + x/5^n

int main(){
	int n;
	cin >> n;
	int ans=0;
	for(int i=5; n/i>=1;i*=5){
		ans+=(n/i);
	}
	cout << ans;

	return 0;
}

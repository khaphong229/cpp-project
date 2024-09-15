#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
#define mod 1000000007
#define maxn 1000006
int f[maxn];
int main(){
	int n;
	cin >> n;
	f[0]=1;
	for(int s=1; s<=n; ++s){
		for(int j=1; j<=6; j++){
			if(j<=s){
				f[s]=(f[s]+f[s-j])%mod;
			}
		}
	}
	cout << f[n];
	return 0;
}
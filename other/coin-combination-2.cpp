#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int mod=1e9+7;
const int N=1e6+1;
int f[N];
int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0; i<x;i++){
		f[i]=0;
	}
	f[0]=1;
	for(int i=0;i<n;i++){
		for(int j=1; j<=x;j++){
			if(j>=a[i]){
				f[j]=(f[j]+f[j-a[i]])%mod;
			}
		}
	}
	cout << f[x] << endl;
	return 0;
}
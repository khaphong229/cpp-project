#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N=1e6+1;
int f[N];
int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i=0; i<n;i++){
		cin >> a[i];
	}
	f[0]=0;
	for (int i = 1; i <=x; i++)
	{
		f[i]=1e9;
		for(int c : a){
			if(i>=c){
				f[i]=min(f[i],f[i-c]+1);
			}
		}
	}
	if(f[x]==1e9){
		cout << -1 << endl;
	}else{
		cout << f[x] << endl;
	}
	return 0;
}
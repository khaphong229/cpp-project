#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const ll N=2e5+5;
int f[N];
int a[N];
int main(){
	int n; cin >> n;
	for (int i =1; i <=n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		f[i]=1;
		for (int j = 1; j < i; ++j)
		{
			if(a[j] < a[i]){
				// if (f[j]+1>f[i]){
				// 	f[i]=f[j]+1;
				// }
				f[i]=max(f[i], f[j]+1);
			} 
		}
	}
	cout << *max_element(f,f+n+1) << endl;
	return 0;
}
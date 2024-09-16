#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n; cin >> n;
	int a[n];
	for(int &x: a) cin >> x;
	int min_val=1e9; min_i=0;
	int max_val=0; max_i=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]<=min_val){
			min_val=a[i];
			min_i=i;
		}
		if(a[i]>max_val){
			max_val=a[i];
			max_i=i;
		}
	}
	cout << min_i << ' ' << max_i << endl;
	return 0;
}
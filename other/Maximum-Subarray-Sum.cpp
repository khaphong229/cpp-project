#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const ll N=2e5+5;

ll n, a[N];
ll max_val=LONG_MIN;
ll sum=0;

int main(){
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i=0; i<n;i++){
		sum+=a[i];
		max_val=max(max_val,sum);
		if (sum < 0) sum = 0 ;
	}
	cout << max_val << endl;
	return 0;
}
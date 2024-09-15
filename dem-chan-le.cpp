#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n;

int main(){
	cin >> n;
	int a[n];
	for(int &x: a) cin >> x;
	int cnt_even=0, cnt_odd=0, sum_even=0, sum_odd=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]%2==0){
			cnt_even++;
			sum_even+=a[i];
		}else{
			cnt_odd++;
			sum_odd+=a[i];
		}
	}
	cout << cnt_even << endl;
	cout << cnt_odd << endl;
	cout << sum_even << endl;
	cout << sum_odd << endl;
	return 0;
}
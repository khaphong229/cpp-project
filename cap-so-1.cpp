#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	int k;
	cin >> k;
	int cnt=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if(a[i]+a[j]==k && i!=j){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
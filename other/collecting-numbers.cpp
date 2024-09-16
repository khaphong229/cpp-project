#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 5;
int a[N];
int n;
int cnt = 1;
int main(){
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int index[n + 5];
	for (int i = 0; i < n; ++i)
	{
		index[a[i]] = i;
	}
	for (int i = 1; i < n; ++i)
	{
		if (index[i + 1] < index[i]){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
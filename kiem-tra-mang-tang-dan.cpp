#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n;
int a[1000006];

bool solve(int a[]){
	for (int i = 0; i < n-1; ++i)
	{
		if(a[i+1]<=a[i]) return 0;
	}
	return 1;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	if(solve(a)==1){
		cout << "YES" << endl;
	}else cout << "NO" << endl;
	return 0;
}
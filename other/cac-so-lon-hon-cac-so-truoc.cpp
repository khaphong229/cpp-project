#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const ll N=1e6+5;

int n;
int a[N];

void solve(int a[]){
    int max_first=a[0];
	cout << max_first << ' ';
	for (int i = 1; i < n; ++i)
	{
		if(a[i]>max_first){
			cout << a[i] << ' ';
			max_first=a[i];
		}
	}
	cout << endl;
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	solve(a);
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	// int a[3][3]={
	// 	{1,2,3},
	// 	{4,5,6},
	// 	{7,8,9}
	// };
	// cout << a[0][2] << endl;

	int n,m; cin >> n >> m;
	int a[n][m];
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	
	int max_val=INT_MIN;
	int min_val=INT_MIN;
	return 0;
}
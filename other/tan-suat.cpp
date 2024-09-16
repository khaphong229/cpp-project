#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	int d[1001]={0};
	for(int &x:a){
		cin >> x;
		d[x]++;
	}
	for (int i = 0; i < n; ++i)
	{
		if(d[a[i]]>0){
			cout << a[i] << ' ' << d[a[i]] << endl;
			d[a[i]]=0;
		}
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for(int &x: a) cin >> x;
	for(int &x: b) cin >> x;
	int i=0, j=0;
	while (i < n && j < m){
		if(a[i] <= b[j]){
			cout << a[i]  << ' ';
			i++;
		}else{
			cout << b[j] << ' ';
			j++;
		}
	}
	while(i<n){
		cout << a[i] << ' '; i++;
	}
	while(j<m){
		cout << b[j] << ' '; j++;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	int min_val=1e9;
	for(int i:a){
		if(i<min_val) min_val=i;
	}
	int cnt=0;
	for(int i:a){
		if(i==min_val) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x: a) cin >> x;
	int k;
	cin >> k;
	int min_cnt=0, max_cnt=0;
	for(int i:a){
		if(i<k) min_cnt++;
		else max_cnt++;
	}
	cout << min_cnt << endl;
	cout << max_cnt << endl;
	return 0;
}

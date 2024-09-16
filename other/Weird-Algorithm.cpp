#include <bits/stdc++.h>
using namespace std;

#define ln '\n'
typedef long long ll;

int main(){
	ll n;
	ios_base::sync_with_stdio(0);
	cin.tie(0) ;
	cin >> n;
	cout << n << ' ';
	while(n!=1){
		if(n%2==1){
			n=(n*3)+1;
		}else{
			n=n/2;
		}
		cout << n << ' ';
	}
	return 0;
}
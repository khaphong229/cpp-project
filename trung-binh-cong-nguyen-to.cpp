#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int prime(int n){
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if(n%i==0) return 0;
	}
	return n > 1;
}

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x:a) cin>> x;
	int cnt;
	int sum_prime=0;
	for (int i = 0; i < n; ++i)
	{
		if(prime(a[i])){
			cnt++;
			sum_prime+=a[i];
		}
	}
	cout << fixed << setprecision(3) << (double) sum_prime/cnt << endl;
	return 0;
}


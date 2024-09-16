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
	int sum=0;
	for(int &x:a){
		cin >> x;
		sum+=x;
	}
	int sum_l=a[0];
	for (int i = 1; i < n-1; ++i)
	{
		int sum_r=sum-sum_l-a[i];
		if(prime(sum_l) && prime(sum_r)){
			cout << i << endl;
		}
		sum_l+=a[i];
	}
	return 0;
}
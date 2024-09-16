#include <bits/stdc++.h>
using namespace std;

int tong(int n){
	if(n==0) return 0;
	return n + tong(n-1);
}

int giaithua(int n){
	if(n==0) return 1;
	return n * giaithua(n-1);
}

int fibo(int n){
	if (n==0 || n==1) return n;
	return fibo(n-1) + fibo(n-2);
}

int tongchuso(int n){
	if (n<10) return n;
	return n%10 + tongchuso(n/10);
}

void doi(int n){
	if (n<2){
		cout << n%2 << '';
	}else{
		doi(n/2);
		cout << n%2 << '';
	}
}

int main()
{

	cout << doi(23) << endl;

	return 0;
}
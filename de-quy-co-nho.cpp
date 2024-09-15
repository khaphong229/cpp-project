#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int f[100];

int fibo(int n){
	if (n<=1) return 1;
	if(f[n]!= -1) return f[n];
	f[n]=fibo(n-1) + fibo(n-2);
	return f[n];
}

int main(){
	memset(f, -1 ,sizeof f);
	cout << fibo(20) << endl;
	return 0;
}
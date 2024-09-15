#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, k;
int a[N];

double mu2(double x){
	return x*x;
}

double f(double x){
	double k;
	for(int i=1; i<=n; i++){
		k+=mu2(abs(a[i]-x));
	}
	return k;
}

double tktp(double l, double r){
	int N_ITER = 10000000;
	for(int i=0; i<N_ITER; i++){
		double x1=l+(r-l)/3.00; 
		double x2=r-(r-l)/3.00;
		if (f(x1) > f(x2)) r = x2;
        else l = x1;
	}
	return f(l);
}
int solve1(){
	int res=0;
	sort(a+1, a+n+1);
	int d=a[(1+n)/2];
	for(int i=1; i<=n; i++){
		res+=abs(a[i]-d);
	}
	return res;
}
int solve2(){
	int res=0;
	sort(a+1, a+n+1);
	int l=a[1];
	int r=a[n];
	return tktp(l, r);
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i=1; i<=n; i++){
    	cin >> a[i];
    }
    if(k==1){
    	int ans=solve1();
    	cout << ans;
    }else if(k==2){
    	int ans=solve2();
    	cout << ans;
    }
	return 0;
}

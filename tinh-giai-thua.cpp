#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;
int n;
ll gthua(int n){
	if(n<=1) return 1;
	return n * gthua(n-1);
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
   	cin >> n;
   	cout << gthua(n) << ln;
	return 0;
}

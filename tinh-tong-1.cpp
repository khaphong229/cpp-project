#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;

int n;
int sum1(int n){
	if(n==0) return 0;
	return n + sum1(n-1);
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cout << sum1(n) << endl;
	return 0;
}

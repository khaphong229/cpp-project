#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;

int solve(int n){
	int res=0;
	for(int x=2;x<=n;x++){
		int sum=0;
		int i=1;
		while(sum<=n){
			sum+=x*i;
			i++;
		}
		res=max(x,res);
	}
	return res;
}

int n;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0;i<n;i++){
    	int n;
    	cin >> n;
    	cout << solve(n) << ln;
    }

	return 0;
}

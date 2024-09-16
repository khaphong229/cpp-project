#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;
const int N=1e6+5;
int n;
int a[N];

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    FT(i,0,n){
    	cin >> a[i];
    }
    int sum=0;
    FT(i,0,n){
    	if(a[i]==25){
    		sum+=a[i];
    	}else{
    		sum=sum+(a[i]-(a[i]-25));
    	}
    }
    if(sum>=0) cout << "YES";
    else cout << "N0";
	return 0;
}

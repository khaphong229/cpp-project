#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;
const int N = 200005;

int t;
pair <int, int> a[N];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
    	int n;
    	cin >> n;
    	FTB(i,1,n) cin >> a[i].first;
    	FTB(i,1,n) cin >> a[i].second;
    	FTB(i,1,n){
    		a[i].first=max(a[i].first, a[i-1].second);
    		cout << a[i].second - a[i].first << ' ';
    	}
    	cout << ln;
    }

	return 0;
}

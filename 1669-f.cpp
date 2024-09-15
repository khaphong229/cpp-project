#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;
const int N =2e5 + 5;
const int mod = 1e9 + 7;
int t;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
    	int n;
    	cin >> n;
    	vector <int> a(n);
    	FT(i,0,n) cin >> a[i];
    	int i=0, j=n-1;
    	int s1 = 0, s2 = 0;
    	int ans = 0;
        int cnt1 = 0, cnt2 = 0;
        while ( i <= j ){
            if( s1 <= s2 ){
                s1 += a[i];
                i++;
                cnt1++;
            }else{
                s2 += a[j];
                j--;
                cnt2 ++; 
            }
            if (s1 == s2 ) ans = cnt1 + cnt2;
        }
    	cout << ans << endl;
    }

	return 0;
}

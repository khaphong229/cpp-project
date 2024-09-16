#include <bits/stdc++.h>
using namespace std;
#define f0(i, a, b) for(ll i=a, b=b; i<=b; i++)
#define f1(i, a, b) for(ll i=a, b=b; i<b; i++)
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
    	f1(i,0,n) cin >> a[i];
    	int i=0, j=n-1;
    	int s1 = 0, s2 = 0;
    	int ans = 0;
    	while(s2 < s1){
    		if(s1==s2 && i<j){
    			ans=max(ans, i + n - j +1);
    		}else{
    			if(i<j){
                    s1+=a[i];
                    i++;
                }else{
                    s2+=a[j];
                    j--;
                }
    		}
    	}
    	cout << ans << endl;
    }

	return 0;
}

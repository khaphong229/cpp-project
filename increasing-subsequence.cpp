#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int a[N];
int dp[N];
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
    	cin >> a[i];
    }
    for(int i=0; i<n; i++){
    	dp[i]=1;
    	for(int j=0; j<i; j++){
    		if(a[i]>a[j]){
    			dp[i]=max(dp[i], dp[j]+1);
    		}
    	}
    }
    cout << *max_element(dp, dp+n) << endl;

	return 0;
}

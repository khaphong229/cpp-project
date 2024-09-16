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
int solve(){
	int l=1, r=n;
    int l1=a[l], r1=a[r];
    int res=0;
    while (l<r){
        if (l1 < r1){
            l++;
            l1=max(l1, a[l]);
            res+=(l1-a[l]);
        }else{
            r--;
            r1=max(r1, a[r]);
            res+=(r1-a[r]);
        }
    }
    return res;
}
int Try(int i, int k){
	if(i>n || k==0){
		return solve();
	}
	int ans=0;
	for(int j=0; j<=k; j++){
		a[i]+=j;
		ans=max(ans, Try(i+1, k-j));
		a[i]-=j;
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i=1; i<=n; i++){
    	cin >> a[i];
    }
   	cout << Try(1, k);
	return 0;
}

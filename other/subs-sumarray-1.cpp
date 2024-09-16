#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int a[N];
int n, x;
int cnt=0;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for (int i=1; i<=n; i++){
    	cin >> a[i];
    }
    int l=1;
    int sum=0;
    for (int r=1; r<=n; r++){
    	sum+=a[r];
    	while (l<r && sum>x){
    		sum-=a[l];
    		l++;
    	}
    	if (sum==x){
    		cnt++;
    	}
    }
    cout << cnt << endl;
	return 0;
}

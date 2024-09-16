#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int t;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while(t--){
    	int n;
    	cin >> n; 
    	int a[n+1];
    	for(int i=0; i<n; i++){
    		cin >> a[i];
    	}
    	int res=0;
    	for(int i=0; i<n; i++){
    		if(a[i]>a[(i+1)%n]){
    			res++;
    		}
    	}
    	cout << res << endl;
    }

	return 0;
}

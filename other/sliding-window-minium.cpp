#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int a[N];
int n, k;
int find_min(int st, int en){
	int k=en-st+1;
	vector<int> subarr(k);
	copy(a+st, a+en+1, subarr.begin());
	return *min_element(subarr.begin(), subarr.end());
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i=0; i<n; i++){
    	cin >> a[i];
    }
    for (int i=k-1; i<n; i++){
    	cout << find_min(i-k+1, i) << ' ';
    }
	return 0;
}

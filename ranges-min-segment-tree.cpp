#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, q;
int a[N];
int t[N*4];
void build(int v, int l, int r){
	if(l==r){
		t[v]=a[l];
	}else{
		int m=(l+r)/2;
		build(v*2, l, m);
		build(v*2+1, m+1, r);
		t[v]=min(t[v*2], t[v*2+1]);
	}
}
int get(int v, int l, int r, int x, int y){
	if(l>=x && r<=y){
		return t[v];
	}
	if(y<l || x>r){
		return INT_MAX;
	}
	int m=(l+r)/2;
	return min(get(v*2, l, m, x ,y), get(v*2+1, m+1, r, x, y));
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    ff(i, 1, n){
    	cin >> a[i];
    }
    build(1, 1, n);
    while(q--){
    	int x, y;
    	cin >> x >> y;
    	cout << get(1, 1, n, x, y) << ln;
    }

	return 0;
}

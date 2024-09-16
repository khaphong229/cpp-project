#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int a[N], n;
int t[4*N];
void build(int v, int l, int r){
	if (l==r){
		t[v]=a[l];
	}else{
		int m=(l+r)/2;
		build(2*v, l, m);
		build(2*v+1, m+1, r);
		t[v]=t[2*v]+t[2*v+1];
	}
}

//query: sum a[l, r]
int sum(int v, int tl, int tr, int l, int r){
	if(l>r) return 0;
	if (l==tl && r==tr){
		return t[v];
	}else{
		int tm=(tl+tr)/2;
		return sum(2*v, tl, tm, l, min(tm, r)) + sum(2*v+1, tm+1, tr, max(tm+1, l), r);
	}
}
void update(int v, int l, int r, int pos, int val){
	if(l==r) t[v]=val;
	else{
		int m=(l+r)/2;
		if(pos<=m){
			update(2*v, l, m, pos, val);
		}else{
			update(2*v+1, m+1, r, pos, val);
		}
		t[v]=t[2*v]+t[2*v+1];
	}
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n;i++){
    	cin >> a[i];
    }
    build(1, 0, n-1);
    int l, r;
    cin >> l >> r;
    cout << sum(1, 0, n-1, l, r);

	return 0;
}


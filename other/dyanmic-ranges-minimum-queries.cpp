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
int t[4*N];
void build(int v, int l, int r){
	if(l==r){
		t[v]=a[l];
	}else{
		int m=(l+r)/2;
		build(2*v, l, m);
		build(2*v+1, m+1, r);
		t[v]=min(t[2*v], t[2*v+1]);
	}
}
void update(int v, int l, int r, int k, int u){
  if(k==l && k==r){
    t[v]=u;
    return;
  }
  if(k>r || k<l){
    return;
  }
  int m=(l+r)/2;
  update(v*2, l, m, k, u);
  update(v*2+1, m+1, r, k ,u);
  t[v]=min(t[2*v], t[2*v+1]);
}
int get(int v, int l, int r, int a, int b){
  if(l>=a && r<=b){
    return t[v];
  }
  if(l> b || r < a){
  	return INT_MAX;
  }
  int m=(l+r)/2;
  return min(get(2*v, l, m, a, b), get(2*v+1, m+1, r, a, b));
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for(int i=1; i<=n; i++){
    	cin >> a[i];
    }
    build(1, 1, n);
    while (q--){
    	int qr, a, b;
    	cin >> qr >> a >> b;
    	switch (qr) {
            case 1: {
                update(1, 1, n, a, b);
                break;
            }
            case 2: {
                cout << get(1, 1, n, a, b) << endl;
                break;
            }
        }

    }
	return 0;
}

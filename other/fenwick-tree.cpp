#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

const int maxn=1e6+5;
int a[maxn], BIT[maxn], n;
void update(int pos, int val){
	for (; pos<=n; pos+=pos&(-pos)){
		BIT[pos]+=val;
	}
}
int query(int pos){
	int sum=0;
	for (; pos>0; pos-=pos&(-pos)){
		sum+=BIT[pos];
	}
	return sum;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++){
    	cin >> a[i];
    	update(i, a[i]);
    }
    cout << query(3) - query(1) << endl;

	return 0;
}

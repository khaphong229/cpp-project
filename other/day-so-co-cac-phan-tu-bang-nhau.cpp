#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, k;
int a[100005];
void solve(int n, int k, int a[]){
	vector<int> check(n, 0);
	int cnt=0;
	for (int i=0; i<n;){
		if (check[i]==0){
			int tmp = (n%2==0) ? k-1 : k;
			for (int j=i; j< min(i+tmp, n); j++){
				check[j]=1;
			}
			cnt++;
			i+=tmp;
		}else{
			i+=1;
		}
	}
	cout << cnt << endl;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i=0; i<n; i++){
    	cin >> a[i];
    }
    solve(n, k, a);
	return 0;
}
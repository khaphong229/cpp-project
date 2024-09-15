#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int a[N];
int n;
stack <int> st;
vector <int> res;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=1; i<=n; i++){
    	cin >> a[i];
    }
    for (int i=1; i<=n; i++){
    	while (!st.empty() && a[st.top()]>=a[i]){
    		st.pop();
    	}
    	if (st.empty()){
    		res.push_back(0);
    	}else{
    		res.push_back(st.top());
    	}
    	st.push(i);
    }
    for (auto x: res){
    	cout << x << endl;
    }
	return 0;
}

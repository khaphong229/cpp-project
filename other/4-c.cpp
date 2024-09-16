#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    string a[n];
    map <string, int> mp;
    fff(i, 0, n){
    	cin >> a[i];
    	mp[a[i]] = 0;
    }
    for (int i=0; i<n; i++){
    	if (mp[a[i]]==0){
    		cout << "OK" << ln;
    		mp[a[i]]=1;
    	}else{
    		cout << a[i] << to_string(mp[a[i]]) << ln;
    		mp[a[i]]++;
    	}
    }
	return 0;
}

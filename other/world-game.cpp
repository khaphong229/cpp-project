#include <bits/stdc++.h>
using namespace std;
#define f0(i, a, b) for(ll i=a, i<=b; i++)
#define f1(i, a, b) for(ll i=a, i<b; i++)
#define ln '\n'
typedef long long ll;
const int N =2e5 + 5;
const int mod = 1e9 + 7;
int t;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--){
    	int n;
    	cin >> n;
    	vector <string> a[3];
    	map <string, int> m;
    	for (int i=0; i<3; i++){
    		for (int j=0; j<n; j++){
    			string s;
    			cin >> s;
    			a[i].push_back(s);
    			m[s]++;
    		}
    	}
    	int cnt[3] = {};
    	for (int i=0; i<3; i++){
    		for (string s:a[i]){
    			if (m[s] == 1) cnt[i]+=3;
    			if (m[s] == 2) cnt[i]+=1;
    		}
    	}
    	cout << cnt[0] << ' ' << cnt[1] << ' ' << cnt[3] << ln;
    }

	return 0;
}

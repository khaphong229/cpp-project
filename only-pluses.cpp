#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int n, a, b, c;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vector <int> s(3);
    while (n--){
    	fff(i, 0, 3) cin >> s[i];
    	sort(s.begin(), s.end());
    	int limit =5;
        while (1){
            if (limit <=0 ) break;
            sort(s.begin(), s.end());
            s[0]++;
            limit--;
        }
        cout << s[0] * s[1] * s[2] << endl;
    }

	return 0;
}

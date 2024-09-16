#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
string s;
int a[26];
string solve(string s) {
	int n = s.length();
	string ans(n, ' ');

	for (int i = 0; i < n; i++) {
		a[s[i] - 'A'] += 1;
	}

	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (a[i] % 2 != 0) {
			cnt++;
		}
	}
	if (cnt > 1) {
		return "NO SOLUTION";
	}

	int l = 0, r = n - 1;
	for (int i = 0; i < n; i++) {
		if (a[s[i] - 'A'] % 2 == 1) {
			ans[n / 2] = s[i];
			a[s[i] - 'A']--;
		}
		while (a[s[i] - 'A'] > 0) {
			ans[l++] = ans[r--] = s[i];
			a[s[i] - 'A'] -= 2;
		}
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
    cout << solve(s) << endl;

	return 0;
}

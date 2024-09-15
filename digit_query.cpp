#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int soChuSo(int n){
	int cnt=0;
	while(n>0){
		n/=10;
		cnt++;
	}
	return cnt;
}

int solve(int k){
	int cur=1;
	int curPos=1;

	while(true){
		int so=soChuSo(cur);
		if(curPos+so>=k){
			string s=to_string(cur);
			return s[k-curPos-1]-'0';
		}
		curPos+=so;
		cur++;
	}
}

int main()
{
	int q;
	cin >> q;
	
	while(q--){
		int k;
		cin >> k;
		cout << solve(k) << ln;
	}

	return 0;
}
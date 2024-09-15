#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main()
{
	string s;
	cin >> s;
	vector <string> ans;
	sort(s.begin(),s.end());
	do{
		ans.push_back(s);
	}while(next_permutation(s.begin(),s.end()));
	cout << ans.size() << ln;
	for(auto i : ans){
		cout << i << ln;
	}
	return 0;
}
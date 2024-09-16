#include <bits/stdc++.h>
using namespace std;

void solve(string s, int index, vector<string> &ans){
	if (index==s.size()){
		ans.push_back(s);
		return;
	}
	for (int i = index; i < s.size(); i++)
	{
		swap(s[index],s[i]);
		solve(s,index+1,ans);
		swap(s[index],s[i]);
	}
}

int main()
{
	string s;
	cin >> s;
	vector<string> ans;
	solve(s,0,ans);
	sort(ans.begin(),ans.end());
	set<string> ss;
	for (string i : ans)
	{
		ss.insert(i);
	}
	cout << ss.size() << endl;
	for(string j : ss){
		cout << j << endl;
	}
	return 0;
}
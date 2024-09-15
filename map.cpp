#include <bits/stdc++.h>
using namespace std;

int main()
{
	map <int,int> mp;
	mp.insert({1,2});
	mp.insert({2,3}); 
	mp.insert({3,4}); 
	mp[4]=5;
	mp[2]=4;
	cout << mp.size() << endl;
	// mp.clear();
	// if(mp.empty()) cout << "empty" << endl;
	// else cout << "not empty" << endl;

	// for (pair<int,int> it : mp){
	// 	cout << it.first << ' ' << it.second << endl;
	// }

	// for (auto it : mp){
	// 	cout << it.first << ' ' << it.second << endl;
	// }
	// for (auto it : mp){
	// 	int key=it.first;
	// 	cout << key << ' ' << mp[key] << endl;
	// }
	//find, count, erase
	return 0;
}
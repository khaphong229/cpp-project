#include <bits/stdc++.h>
using namespace std;

int main()
{
	set <int> se;
	int a[4]={1,4,2,2};
	for (int i=0;i<4;i++){
		se.insert(a[i]);
	}
	// for (int i : se){
	// 	cout << i << ' ';
	// }
	for (auto it=se.begin(); it!=se.end();++it){
		cout << *it << ' ';
	}
	cout << endl;
	cout << se.size() << endl;
	
	return 0;
}
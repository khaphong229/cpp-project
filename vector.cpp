#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

	vector <int> a;
	a.assign(5,100);
	a.resize(3);
	// a.push_back(5);
	// a.push_back(4);
	// a.push_back(2);
	// a.push_back(1);
	// a.push_back(2);
	// a.pop_back();
	if (!a.empty()){
		for (int i=0; i< a.size(); i++){
			cout << a[i] << ' ';
		}
	}else{
		cout << "empty" <<endl;
	}

	// vector <int> a={1,3,4,5,6,7,8};
	// for (int i=0; i< a.size(); i++){
	// 	cout << a[i] << ' ';
	// }
	// cout << endl;
	// for (int i : a){
	// 	cout << i << ' ';
	// }
	// cout << endl;
	// for (vector<int>::iterator i = a.begin(); i != a.end(); ++i){
	// 	cout << *i << ' ';
	// }

	// vector <int>::iterator it1=a.begin();
	// cout << *it1 << endl;

	// vector <int>::iterator it2=a.end();
	// cout << *it2 <<endl;

	// vector <int>::iterator it3=a.end();
	// --it3;
	// cout << *it3 << endl;

	// cout << *(it1+4) <<endl;
return 0;
}
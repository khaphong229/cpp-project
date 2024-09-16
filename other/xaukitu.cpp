#include <bits/stdc++.h>
using namespace std;


int main()
{
	// string firstName, lastName;
	// cin >> firstName >> lastName;
	// cout << firstName << ' ' << lastName;
	
	// int x;
	// cin >> x;
	// string name;
	// cin.ignore(1);
	// getline(cin,name);
	// cout << name;

	
	// cout << name.size() << endl;
	// cout << name.length() << endl;

	// for (int i=0; i<name.size();i++){
	// 	cout << name[i] << ' ';
	// }
	// cout << endl;
	// for (char i : name){
	// 	cout << i << ' ';
	// }

	// name.push_back('@'); //thêm phần tử vào cuối
	// name.pop_back(); // xóa phần tử ở cuối

	// string name="phong";
	// string prev_name="kha";

	// name.insert(2,"kha");
	// name.erase(2,3);
	// cout << name.find("kha") << endl;
	// cout << (name == prev_name) << endl;
	// cout << (name != prev_name) << endl;

	// cout << islower('a') << endl;

	// string s="sdaksdjalskdj";
	// int a[256]={0};
	// for (char i : s){
	// 	a[i]++;
	// }
	// for(int i=0; i<256;i++){
	// 	if (a[i]){
	// 		cout << (char) i << ' ' << a[i] << endl;
	// 	}
	// }
	string s="phong kha   dep zia";
	stringstream ss(s);
	string word;
	while(ss>>word){
		cout << word << endl;
	}

	return 0;
}
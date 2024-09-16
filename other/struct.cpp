#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ten;
	string lop;
	double gpa;
	SinhVien(){
		cout << "hello my friend" << endl;
	}
};

int main()
{
	// SinhVien x;
	// getline(cin,x.ten);
	// getline(cin,x.lop);
	// cin >> x.gpa;
	// cout << x.ten << ' ' << x.lop << ' ' << x.gpa << endl;
	
	SinhVien x;
	SinhVien *ptr = &x;
	getline(cin,ptr->ten);
	getline(cin,ptr->lop);
	cin >> ptr->gpa;
	cout << ptr->ten << ' ' << ptr->lop << ' ' << ptr->gpa << endl;

	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n;


int main(){
	cin >> n;
	vector<string> a(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a.begin(),a.end());
	do{
		for(string i: a){
			cout << i << ' ';
		}
		cout << endl;
	}while(next_permutation(a.begin(),a.end()));
	return 0;
}

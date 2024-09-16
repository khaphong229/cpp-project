#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	string s;
	cin >> s;
	sort(s.begin(),s.end());
	do{
		for(int i=0; i<s.size();i++){
			cout << s[i] << "";
		}
		cout << endl;
	}while(next_permutation(s.begin(),s.end()));

	return 0;
}
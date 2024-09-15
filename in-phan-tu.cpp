#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	bool check=false;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]%2==0 && i%2==0){
			check=true;
			cout << a[i] << ' ';
		}
	}
	if(check==false) cout << "NONE" << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	while(n--){
		int x, y;
		cin >> x >> y;
		int min_val=min(x,y);
		int max_val=max(x,y);
		cout << min_val << ' ' << max_val << endl;
	}
	return 0;
}
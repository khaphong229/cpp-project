#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N=1e6;
bool a[N];

int main(){
	int n;
	cin >> n;
	for(int i=0; i < n-1; i++){
		int x;
		cin >> x;
		a[x]=true;
	}
	for(int i=1; i<=n;i++){
		if(!a[i]){
			cout << i << ' ';
		}
	}
	return 0;
}

// int main() {
//     long long int n, input, sum = 0;
//     cin >> n;

//     for (int i = 0 ; i < n - 1 ; i++) {
//         cin >> input;
//         sum += input;
//     }

//     cout << ( n * (n + 1) ) / 2 - sum << endl;

//     return 0;
// }
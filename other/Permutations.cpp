#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

// vector<vector<int>> res;
// int main(){
// 	int n;
// 	cin >> n;
// 	if(n==1){
// 		cout << 1 << endl;
// 		return 0;
// 	}
// 	if(n<=3){
// 		cout << "NO SOLUTION" << endl;
// 		return 0;
// 	}
// 	int a[100];
// 	for(int i=1;i<=n;i++){
// 		a[i]=i;
// 	}
// 	do{
// 		vector<int> tmp(a+1,a+n+1);
// 		for(int i=1;i<=n;i++){
// 			tmp.push_back(a[i]);
// 		}
// 		res.push_back(tmp);
// 	}while(next_permutation(a+1,a+n+1));
// 	for(int i=0;i<res.size();i++){
// 		bool check=0;
// 		for(int j=1;j<n;j++){
// 			if(abs(res[i][j]-res[i][j-1])==1){
// 				check=1;
// 			}
// 		}
// 		if(check==0){
// 			for(int j=0;j<n;j++){
// 				cout << res[i][j] << ' ';
// 			}
// 			cout << endl;
// 			return 0;
// 		}
		
// 	}
// 	return 0;
// }


int main(){
	int n;
	cin >> n;
	if(n==1){
		cout << 1 << endl;
		 return 0;
	}
	if(n<=3){
		cout << "NO SOLUTION" << endl;
		return 0;
	}
	for(int i=2;i<=n;i+=2){
		cout << i << ' ';
	}
	for(int i=1;i<=n;i+=2){
		cout << i << ' ';
	}
	return 0;
}
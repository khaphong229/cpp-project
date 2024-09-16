#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n, a[100], final=0;

void ktao(){
	for (int i = 1; i <=n; ++i)
	{
		a[i]=i;
	}
}

void sinh(){
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]){
		i--;
	}
	if(i==0){
		final=1;
	}else{
		int j=n;
		while(a[i]>a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}

vector<vector<int>> res;

int main(){
	cin >> n;
	int b[n+1];
	for (int i = 0; i <n; ++i)
	{
		cin >> b[i];
	}
	ktao();
	while(final==0){
		vector<int> tmp(a+1,a+n+1);
		res.push_back(tmp);
		sinh();
	}
	for(int i=0; i<res.size();i++){
		bool check=true;
		for(int j=0;j<n;j++){
			if(res[i][j]!=b[j]){
				check=false;
				break;
			}
		}
		if(check){
			cout << i+1 << endl;
			return 0;
		}
	}
}
#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n, k, a[100], final=0;

void ktao(){
	for (int i = 1; i <=k; ++i)
	{
		a[i]=i;
	}
}

void sinh(){
	int i=k;
	while(i>=1 && a[i]==n-k+i){
		--i;
	}
	if(i==0){
		final=1;
	}else{
		a[i]++;
		for (int j=i+1; j<=k; ++j)
		{
			a[j]=a[j-1]+1;
		}
	}
}

vector<vector<int>> res;
int main(){
	cin >> n >>k;
	int b[k];
	for (int i = 0; i <k; ++i)
	{
		cin >> b[i];
	}
	ktao();
	while(final==0){
		vector<int> tmp(a+1, a+k+1);
		for (int i = 1; i <=k; ++i)
		{
			tmp.push_back(a[i]);
		}
		res.push_back(tmp);
		sinh();
	}
	for(int i=res.size()-1;i>=0;i--){
		bool check=true;
		for(int j=0; j<k;j++){
			if(res[i][j]!=b[j]){
				check=false;
				break;
			}
		}
		if(check){
			cout << res.size() - i << endl;
			return 0;
		}
	}

}
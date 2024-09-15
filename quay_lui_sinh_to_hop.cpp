#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n, k, x[100];

void in(){
	for (int i = 1; i <=k; ++i)
	{
		cout << x[i] << ' ';
	}
}

void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			in();
			cout << endl;
		}else Try(i+1);
	}
}

int main()
{
	cin >> n >> k;
	Try(1);
	
	return 0;
}
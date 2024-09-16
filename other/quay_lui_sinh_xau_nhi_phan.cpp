#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n, x[100];

void in(){
	for (int i = 1; i <=n; ++i)
	{
		cout << x[i];
	}
}

void Try(int i){
	for(int j=0; j<=1;j++){
		x[i]=j;
		if(i==n){
			in();
			cout << endl;
		}else{
			Try(i+1);
		}
	}
}

int main()
{
	cin >> n;
	Try(1);
	
	return 0;
}
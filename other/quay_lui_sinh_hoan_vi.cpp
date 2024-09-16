#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n, x[100], daxet[100];

void in(){
	for (int i = 1; i <=n; ++i)
	{
		cout << x[i];
	}
}

void Try(int i){
	for(int j=1; j<=n;j++){
		if(daxet[j]==0){
			x[i]=j;
			daxet[j]=1;
		if(i==n){
			in();
			cout << endl;
		}else Try(i+1);
			daxet[j]=0;
		}
		
	}
}

int main()
{
	memset(daxet,0,sizeof(daxet));
	cin >> n;
	Try(1);
	return 0;
}
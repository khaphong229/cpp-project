#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
int cnt=0;
int n, k, x[100], daxet[100];

void in(){
	for (int i = 1; i <=k; ++i)
	{
		cout << x[i];
	}
}

void Try(int i){
	for(int j=1; j<=n;j++){
		// if(daxet[j]==0){
		x[i]=j;
		// 	daxet[j]=1;
		if(i==k){
			in();
			cnt++;
			cout << endl;
		}else Try(i+1);
		// daxet[j]=0;
		// }
		
	}
}

int main()
{
	memset(daxet,0,sizeof(daxet));
	cin >> n >> k;
	Try(1);
	cout << cnt << endl;
	return 0;
}
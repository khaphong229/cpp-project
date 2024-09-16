#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
ll c[1005][1005];
const int mod=1e9+7;
void ktao(){
	for(int i=0;i<=1000;i++){
		for(int j=0;j<=i;j++){
			//tinh c[i][j] to hop chap j cua i
			if(j==0 && i==j){
				c[i][j]=1;
			}else{
				c[i][j]=c[i-1][j-1]+c[i-1][j];
				c[i][j]%=mod;
			}
		}
	}
}
int main(){
	ktao();
	for (int i = 0; i <=10; ++i)
	{
		for (int j = 0; j <=i; ++j)
		{
			cout << c[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
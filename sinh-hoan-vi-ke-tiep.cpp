#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n, a[1005], check=0;

int main(){
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	int i=n-1;
	while(i>=1 && a[i]>a[i+1]) --i;

	if(i!=0){
		check=1;
		int j=n;
		while(a[i]>a[j]) --j;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
	if(check==1){
	for(int i=1; i<=n;i++){
		cout << a[i] << ' ';
	}
	cout << endl;
	}else{
		for(int i=1; i<=n;i++){
		cout << i << ' ';
	}
	}
	return 0;
}
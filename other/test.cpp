#include <bits/stdc++.h>
using namespace std;
int a[1005], b[1005];
int n,m,k;
int solve(){
int cnt =0;
for (int i=0;i<n;i++){
	if(a[i]>k){
		continue;
	}
	for (int j=0;j<m;j++){
		if (a[i]+b[j]<=k){
			cnt++;
		}
	}
}
cout << cnt << "\n";
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;
while (t--){
	cin >> n >> m>>k;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<m;i++){
		cin >> b[i];
	}
	solve();
}
return 1;
}
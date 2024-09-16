#include<bits/stdc++.h>
using namespace std;
#define int long long
int t;
 
signed main(){
	cin>>t;
	while(t--){
		int n,k;
		int a[100015];
		cin>>n>>k;
		for(int i=1;i<=k;i++){
			cin>>a[i];
		}
		sort(a+1,a+k+1);
		
		int cnt=0;
		for(int i=1;i<k;i++){
			if(a[i]==1){
				cnt++;
			}
			else{	
				cnt+=a[i]-1;
				cnt+=a[i];
			}
		}
		cout<<cnt<<endl;
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int main(){
	int n;
	cin>>n;
	ll sum=(1ll*n*(1ll*n+1))/2;
	if(sum%2==0){
		cout<<"YES"<<endl;
		vector<int> set1, set2;
		vector<int> check(n+1,0);
		ll set1_sum=0;
		int max_val=n;
		while(set1_sum<sum/2){
			ll now_sum=sum/2-set1_sum;
			if(now_sum>max_val){
				set1.push_back(max_val);
				check[max_val]=1;
				set1_sum+=max_val;
				max_val--;
				
			}else{
				set1.push_back(now_sum);
				check[now_sum]=1;
				set1_sum=sum/2;
			}
		}
		cout << set1.size() <<endl;
		for(int i=0;i<set1.size();i++){
			cout << set1[i] << ' ';
		}
		cout <<endl;
		for(int i=1;i<=n;i++){
			if(check[i]==0){
				set2.push_back(i);
			}
		}
		cout << set2.size() <<endl;
		for(auto i:set2){
			cout << i << ' ';
		}
		cout << endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}
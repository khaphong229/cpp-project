#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

// int main(){
// 	string s;
// 	cin >> s;
// 	int cnt=0;
// 	int ans=0;
// 	char now;
// 	for(int i=0;i<s.length();i++){
// 		if(s[i]!=now){
// 			now=s[i];
// 			cnt=0;
// 		}
// 		if(s[i]==now){
// 			cnt++;
// 		}
// 		ans=max(ans,cnt);
// 	}
// 	cout << ans << endl;
// 	return 0;
// }

int main(){
	string s;
	cin >> s;
	int cnt=1;
	int ans=0;
	for(int i=1; i<s.length();i++){
		if(s[i]!=s[i-1]){
			ans=max(ans,cnt);
			cnt=0;
		}
		cnt++;
	}
	ans=max(ans,cnt);
	cout << ans << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;

int t;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    cin.ignore();
    FT(i,0,t){
    	int n;
    	string s;
    	cin >> n >> s;
    	map<char,int> mp;
    	for(char i:s){
    		mp[i]=0;
    	}
    	int ans=0;
    	for(char i:s){
    		if(mp[i]!=1){
    			ans+=2;
    			mp[i]=1;
    		}else{
    			ans++;
    		}
    	}
    	cout << ans << ln;
    }

	return 0;
}

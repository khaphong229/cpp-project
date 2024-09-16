#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;

int n;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cin.ignore();
    for(int i=0; i<n;i++){
    	string s;
    	getline(cin, s);
    	char tmp=s[0];
    	s[0]=s[4];
    	s[4]=tmp;
    	cout << s << ln;
    }

	return 0;
}

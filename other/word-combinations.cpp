#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;

string n;
int k;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    cin >> k;
    vector<pair<string,int>> s;
    for(int i=0; i<k;i++){
    	string a;
    	cin >> a;
    	s.push_back(make_pair(a,a.length()));
    }
    for (int i = 0; i < k; ++i)
    {
    	cout << s[i].first << ' ' << s[i].second << ln;
    }


	return 0;
}

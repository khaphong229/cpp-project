#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int n, q;
char a[1005][1005];
int b[1005][1005];
int s[1005][1005];
void build(){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n;j++){
            s[i][j]=s[i][j-1]+s[i-1][j]-s[i-1][j-1]+b[i][j];
        }
    }
}
int solve(int y1, int x1, int y2, int x2){
    return s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1];
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> q;
    for (int i=1; i<=n; i++){
    	for(int j=1; j<=n; j++){
            cin >> a[i][j];
    	}
    }
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n; j++){
            if(a[i][j]=='.'){
                b[i][j]=0;
            }else{
                b[i][j]=1;
            }
        }
    }
    build();
    // for (int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout << s[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    while (q--){
    	int y1, x1, y2, x2;
    	cin >> x1 >> y1 >> x2 >> y2;
    	cout << solve(y1, x1, y2, x2) << ln;
    }

	return 0;
}

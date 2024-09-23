#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const int N = 100005;
const int mod = 1e9 + 7;
const ll inf=1e18;
int l[4], c[4], fl[4];
int n;
ll a[N], dp[N], d[N];
int s, f;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=1; i<=3; i++){
        cin >> l[i];
    }
    for(int i=1; i<=3; i++){
        cin >> c[i];
    }
    cin >> n >> s >> f;
    if(s>f){
        swap(s, f);
    }
    for(int i=2; i<=n; i++){
        cin >> d[i];
    }
    //chi phi toi thieu di den moi ga dp

    // theo doi ga gan nhan co the dung ve
    for(int i=1; i<=3; i++){
        fl[i]=s;
    }
    for(int i=s+1; i<=f; i++){
        dp[i]=inf; 
        for(int j=3; j>=1; j--){
            while(d[i]-d[fl[j]]>l[j]){
                fl[j]++;
            }
            dp[i]=min(dp[i], dp[fl[j]]+c[j]);
            fl[j-1]=fl[j];
        }
    }
    cout << dp[f] << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(int i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(int i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 1e6+5;
const int mod = 1e9 + 7;

int n;
int a[N];
int cnt[N];
int f[N];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for(int i=1; i<N; i++){
        for(int j=i; j<N; j+=i){
            f[j]+=cnt[i];
        }
    }
    int res=0;
    for(int i=0; i<n; i++){
        if(f[a[i]]==1){
            res++;
        }
    }
    cout << res << ln;
    return 0;
}
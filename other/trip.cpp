#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(int i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(int i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 16;
const int INF = 1e9;

int n;
int a[N][N];
int f[1 << N][N];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<(1 << n); i++) {
        for (int j=0; j<n; j++) {
            f[i][j] = INF;
        }
    }
    for (int i=0; i<n; i++) {
        f[1 << i][i] = 0;
    }
    for (int st=1; st<(1 << n); st++) {
        for (int u=0; u<n; u++) {
            if ((st >> u) & 1) {
                for (int v=0; v<n; v++) {
                    if (v != u && ((st >> v) & 1)) {
                        f[st][u] = min(f[st][u], f[st ^ (1 << u)][v] + a[v][u]);
                    }
                }
            }
        }
    }
    int res = INF;
    for (int i=0; i<n; i++) {
        res = min(res, f[(1 << n) - 1][i]);
    }
    cout << res << ln;
    return 0;
}
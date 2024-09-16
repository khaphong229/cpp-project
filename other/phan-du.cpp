#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
int n, k;
int main() {
    cin >> n >> k;
    int result = 0;
    
    for (int a = 1; a <= n; ++a) {
        for (int b = 1; b <= n; ++b) {
            if (a % b >= k) {
                result++;
            }
        }
    }
    
    cout << result << endl;
    return 0;
}

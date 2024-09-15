#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n, mx;
int a[N], b[N];
// b[i] là gtnn của số cuối cùng dãy con tăng có độ dài bằng i
int main() 
{
    cin >> n;
    for(int i=1; i<=n; i++){
      cin >> a[i];
    }
    for(int i=1; i<=n; i++){
      int j=lower_bound(b+1, b+mx+1, a[i])-b-1;
      b[j+1]=a[i];
      mx=max(mx, j+1);
    }
    cout << mx;
    return 0;
}
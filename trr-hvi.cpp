#include <bits/stdc++.h>
using namespace std;
const int N=1e6+1;
int n, a[N];

bool hvi_ke_tiep(){
  int i=n-1;
  while(i>=1 && a[i]>a[i+1]){
    --i;
  }
  if(i==0){
    return false;
  }
  int j=n;
  while(a[i]>a[j]){
    j--;
  }
  swap(a[i], a[j]);
  reverse(a+i+1, a+n+1);
  return true;
}
void ktao(){
  for(int i=1; i<=n; i++){
    a[i]=i;
  }
}
int main()
{
    cin >> n;
    for(int i=1; i<=n; i++){
      cin >> a[i];
    }
    hvi_ke_tiep();
    cout << "Hoán vị kế tiếp là ";
    for(int i=1; i<=n; i++){
      cout << a[i] << ' ';
    }
    cout << endl;
    cout << "Tất cả cấu hình hoán vị" << endl;
    ktao();
    do {
      for(int i=1; i<=n; i++){
        cout << a[i] << ' ';
      }
      cout << endl;
    }while(hvi_ke_tiep());
    return 0;
}
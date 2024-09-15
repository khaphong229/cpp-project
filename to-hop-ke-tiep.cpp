#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;

int n, k, a[10005], check=0;


void sinh(int n, int k, int a[]){
    int i=k;
    while(i>=1 && a[i]==n-k+i){
        --i;
        check=1;
    }
    if(i!=0){
        check=1;
        a[i]++;
        for(int j=i+1;j<=k;++j){
            a[j]=a[j-1]+1;
        }
    }
    if(check==0){
        for(int l=1; l<=k;l++){
            cout << l << ' ';
    }
    }else{
            for(int l=1; l<=k;l++){
        cout << a[l] << ' ';
    }
}
    cout << endl;
}

int main(){
    cin >> n >> k;
    for(int i=1;i<=k;++i){
        cin >> a[i];
    }

    sinh(n,k,a);

    return 0;
}

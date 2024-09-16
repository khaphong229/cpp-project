#include <bits/stdc++.h>
using namespace std;
#define ln '\n'
typedef long long ll;
const ll N=1e6+5;
int n;
int arr[N];
int cnt=0;

bool ntcn(int a, int b){
    int tmp=0;
    while(b!=0){
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a==1;
}

int main(){
    cin >> n;
    for(int i=0;i < n; i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;++i){
        for(int j=i+1; j<n;++j){
            if(ntcn(arr[i],arr[j])){
                cnt++;
            }

        }
    }
    cout << cnt << endl;
    return 0;
}

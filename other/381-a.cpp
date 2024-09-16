#include <bits/stdc++.h>
using namespace std;
#define ff(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define fff(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define ln '\n'
typedef long long ll;
const int N = 2e5 + 5;
const int mod = 1e9 + 7;

int n;
int r=n-1;
int l=0;
int s1=0, s2=0; //s1 - sereja and s2 - dima
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
    	cin >> a[i];
    }
    for (int i=0; i<n; i++){
    	if (i%2==0){
    		if (a[r]>a[l]){
    			s1+=a[r];
    			--r;
    		}else if(a[r]<a[l]){
    			s1+=a[l];
    			++l;
    		}else{
    			s1+=a[l];
    		}
    	}else{
    		if (a[r]>a[l]){
    			s2+=a[r];
    			--r;
    		}else if(a[r]<a[l]){
    			s2+=a[l];
    			++l;
    		}else{
    			s2+=a[l];
    		}
    	}
    }
    cout << s1 << ' ' << s2 << ln;

	return 0;
}

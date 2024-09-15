#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;

void merge(int a[], int l, int m, int r){
	vector<int> x(a+l, a+m+1);
	vector<int> y(a+m+1, a+r+1);
	int i=0, j=0;
	while(i<x.size() && j<y.size()){
		if(x[i]<=y[j]){
			a[l]=x[i];
			l++;
			i++;
		}else{
			a[l]=y[j];
			l++;
			j++;
		}
	}
	while(i<x.size()){
		a[l]=x[i];
		l++;
		i++;
	}
	while(j<y.size()){
		a[l]=y[j];
		l++;
		j++;
	}
}

void merge_sort(int a[], int l, int r){
	if(l>=r) return;
	int m=(l+r)/2;
	merge_sort(a,l,m);
	merge_sort(a,m+1,r);
	merge(a,l,m,r);
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);


	return 0;
}

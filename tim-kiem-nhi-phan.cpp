#include <bits/stdc++.h>
using namespace std;
#define FTB(i,a,b) for(ll i=a,_b=b;i<=_b;i++)
#define FT(i,a,b) for(ll i=a,_b=b;i<_b;i++)
#define FGB(i,a,b) for(ll i=a,_b=b;i>=_b;i--)
#define FG(i,a,b) for(ll i=a,_b=b;i>_b;i--)
#define ln '\n'
typedef long long ll;

bool binary_search(int a[], int l, int r, int x){
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			return true;
		}else if(a[mid]>x){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	return false;
}

int tim_vi_tri_dau_tien(int a[], int l, int r, int x){
	int res=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			res=a[mid];
			r=mid-1;
		}else if(a[mid]>x){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	return res;
}

int tim_vi_tri_cuoi_cung(int a[],int l, int r, int x){
	int res=-1;
	while(l>=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			res=a[mid];
			l=mid+1;
		}else if(a[mid]>x){
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	return res;
}

int tim_vi_tri_dau_tien_lon_hon_bang_x(int a[], int l, int r, int x){
	int res=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]>=x){
			res=a[mid];
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	return res;
}

int tim_vi_tri_cuoi_cung_nho_hon_bang_x(int a[], int l, int r, int x){
	int res=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]<=x){
			res=a[mid];
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	return res;
}
///lower_bound trả về phần tử đầu tiên lớn hơn hoặc bằng x
///upper_bound trả về phần tử đầu tiên lớn hơn x
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);

	return 0;
}

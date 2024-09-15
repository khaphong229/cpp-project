#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int> a, int x){
	int n=a.size();
	for (int i=0; i<n;i++){
		if (a[i]==x){
			return true;
		}
	}
	return false;
}

bool binarySearch(vector <int> a, int x){
	int left=0;
	int right=a.size()-1;
	while (left<=right){
		int mid=(left+right)/2;
		if (a[mid]==x){
			return true;
		}else if(a[mid]>x){
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	return false;
}

int viTriDauTien(vector <int> a, int x){
	int res=-1;
	int left=0;
	int right=a.size()-1;
	while (left<=right){
		int mid=(left+right)/2;
		if (a[mid]==x){
			res=mid;
			right=mid-1;
		}else if(a[mid]>x){
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	return res;
}


int viTriCuoiCung(vector <int> a, int x){
	int res=-1;
	int left=0;
	int right=a.size()-1;
	while (left<=right){
		int mid=(left+right)/2;
		if (a[mid]==x){
			res=mid;
			left=mid+1;
		}else if(a[mid]>x){
			right=mid-1;
		}else{
			left=mid+1;
		}
	}
	return res;
}

int main()
{	

	vector <int> a={1,2,2,3,4,5,6,6};
	int x=6;

	cout << viTriCuoiCung(a,x) << endl;
	
	
	return 0;
}
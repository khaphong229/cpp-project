#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector <int> a){
	int n=a.size();
	for(int i=0; i<n; i++){
		bool check=false;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				check=true;
				swap(a[j],a[j+1]);
			}
		}
		if(check==false){
			break;
		}
	}
	for(int i : a){
		cout << i << ' ';
	}
}

void selectionSort(vector <int> a){
	int n=a.size();
	for (int i=0;i<n;i++){
		int min_pos=i;
		for (int j=i+1;j<n;j++){
			if (a[j]<a[min_pos]){
				min_pos=j;
			}
		}
		swap(a[min_pos], a[i]);
	}
	for (int i : a){
		cout << i << ' ';
	}
}

bool cmp(int a, int b){
	if (a>b){
		return true;
	}else{
		return false;
	}
}

int main()
{
	
	vector <int> a={3,4,6,1,2,3};
	int b[5]={1,5,6,1,4};
	
	sort(a.begin(),a.end(),cmp);

	for (int i : a){
		cout << i <<' ';
	}
	
	return 0;
}
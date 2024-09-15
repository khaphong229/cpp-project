#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int length=nums.size();
        vector <int> a (length,0);
        int k=1, i=1, j=n;
        a[0]=nums[0];
        a[length-1]=nums[length-1];
        while (k<length-1 && i<n && j<n*2){
        	if (k%2==0){
        		a[k]=nums[i];
        		k++;
        		i++;
        	}else{
        		a[k]=nums[j];
        		k++;
        		j++;
        	}
        }
        return a;
    }
};

int main()
{
	vector <int> b={2,5,1,3,4,7};
	int n=3;
	Solution sol;
	vector <int> result = sol.shuffle(b,n);
	for (int i : result){
		cout << i << ' ';
	}
	
	return 0;
}
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
    	int length=nums.size();
        vector <int> a (length,0);
        for (int i=0; i < length;i++){
        	a[i]=nums[nums[i]];
        }
        return a;
    }
};

int main()
{
	vector <int> nums={5,0,1,2,3,4};
	Solution sol;
	
	vector <int> b = sol.buildArray(nums);
	for (int i : b){
		cout << i << ' ';
	}
	
	return 0;
}
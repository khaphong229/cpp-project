#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int length=nums.size();
        int max_val=-1;
        for (int i=0;i<length-1;i++){
        	for (int j=i+1;j<length;j++){
        		if (nums[i]<nums[j]){
        			max_val=max(max_val,(nums[j]-nums[i]));
        		}
        	}
        }
        return max_val;
    }
};

int main()
{
	vector <int> nums={7,1,5,4};
	cout << Solution().maximumDifference(nums) << endl;
	
	return 0;
}
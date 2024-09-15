#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int length=nums.size();
        int even=0;
        for(int i=0; i<length; i++){
            int cnt=0;
            while(nums[i]>0){
                int r=nums[i]%10;
                cnt++;
                nums[i]/=10;
            }
            if(cnt%2==0){
                even++;
            }
        }
        return even;
    }
};

int main()
{

    vector<int> nums1 = {12, 345, 2, 6, 7896};
    vector<int> nums2 = {555, 901, 482, 1771};
    
    Solution sol;
    cout << "Test case 1: " << sol.findNumbers(nums1) << endl;
    cout << "Test case 2: " << sol.findNumbers(nums2) << endl;




return 0;
}
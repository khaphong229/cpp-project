#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int length = nums.size();
        int cnt=0;
        for (int i=0; i<length;i++){
        	for (int j=0; j<length;j++){
        		if (i<j && nums[i]==nums[j]){
        			cnt++;
        		}
        	}
        }
        return cnt;
    }
};

int main()
{
	vector <int> a={1,2,3,1,1,3};

	Solution sol;

	cout << sol.numIdenticalPairs(a) << endl;
	
	return 0;
}
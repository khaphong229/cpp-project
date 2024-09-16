#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int length=hours.size();
        int cnt=0;
        for (int i=0;i<length;i++){
        	if(hours[i]>=target){
        		cnt++;
        	}
        }
        return cnt;
    }
};

int main()
{
	vector<int> hours = {0,1,2,3,4};
	int target = 2;
	cout << Solution().numberOfEmployeesWhoMetTarget(hours,target) <<endl;
	return 0;
}
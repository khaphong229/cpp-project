#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rich=0;
        int length=accounts.size();
        for (int i=0;i<length;i++){
        	int length_i=accounts[i].size();
        	int tong=0;
        	for (int j=0;j<length_i;j++){
        		tong+=accounts[i][j];
        	}
        	rich=max(rich,tong);
        }
        return rich;
    }
};

int main()
{
	vector<vector<int>> accounts={{1,2,3},{3,2,1}};
	cout << Solution().maximumWealth(accounts) << endl; 
	return 0;
}
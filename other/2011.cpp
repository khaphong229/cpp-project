#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int length=operations.size();
        int res=0;
        for (int i=0;i<length;i++){
        	if(operations[i]=="X++" || operations[i]=="++X"){
        		res++;
        	}else{
        		res--;
        	}
        }
        return res;
    }
};

int main()
{
	vector<string> operations={"--X","X++","X++"};

	Solution sol;

	cout << sol.finalValueAfterOperations(operations) << endl;
	
	return 0;
}

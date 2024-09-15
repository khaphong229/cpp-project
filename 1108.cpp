#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        int length=address.size();
        string ans="";
        for (int i=0;i<length;i++){
            if(address[i]=='.'){
                ans+="[.]";
            }else{
                ans+=address[i];
            }
        }
        return ans;
    }
};

int main()
{
	string address="1.1.1.1";

    Solution sol;

    cout << sol.defangIPaddr(address) << endl;
	
	return 0;
}
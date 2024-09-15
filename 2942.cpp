#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> ans;
        int length=words.size();
        for (int i=0;i<length;i++){
        	for(auto j : words[i]){
        		if(j==x){
	        		ans.push_back(i);
	        		break;
        		}
        	}
        }
        return ans;
    }
};

int main()
{
	vector <string> words = {"abc","bcd","aaaa","cbc"};
	char x = 'a';
	Solution sol;
	vector <int> result=sol.findWordsContaining(words,x);
	for(int i : result){
		cout << i << ' ';
	}
	
	return 0;
}
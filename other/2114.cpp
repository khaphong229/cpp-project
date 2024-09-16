#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_word=0;
        for (int i = 0 ; i < sentences.size() ; i++){
        	stringstream ss(sentences[i]);
        	string word;
        	int cnt=0;
        	while(ss>>word){
        		cnt++;
        	}
        	max_word=max(max_word,cnt);
        }
        return max_word;
    }
};

int main()
{
	vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
	Solution sol;
	cout << sol.mostWordsFound(sentences) << endl;
	return 0;
}
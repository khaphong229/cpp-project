class Solution {
public:
    int characterReplacement(string s, int k) {
        vector <int> cnt(26);
        int maxCnt=0;
        int i=0, j=0;
        int ans=0;
        while(j<s.size()){
            cnt[s[j]-'A']++;
            maxCnt=max(maxCnt, cnt[s[j]-'A']);
            if (j-i+1 - maxCnt>k){
                cnt[s[i]-'A']--;
                i++;
            }
            ans=max(ans, j-i+1);
            j++;
        }
        return ans;
    }
};
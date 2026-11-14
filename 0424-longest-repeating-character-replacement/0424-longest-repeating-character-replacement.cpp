class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int left=0;
        unordered_map<char,int> mp;
        int maxf=0;

        int maxlen=0;

        for(int right=0;right<n;right++){
            mp[s[right]]++;
            maxf=max(maxf,mp[s[right]]);
            while(right-left+1-maxf>k){
                mp[s[left]]--;
                left++;
            }
            
            maxlen=max(maxlen,right-left+1);

        }
        return maxlen;
    }
};
class Solution {
public:
    int beautySum(string s) {
        int ans=0;
        
        for(int i=0;i<s.length();i++){
            unordered_map<char,int> mp;

            for(int j=i;j<s.length();j++){
                mp[s[j]]++;
                int maxfreq=0;
                int minfreq=INT_MAX;

                for(auto x:mp){
                    maxfreq=max(maxfreq,x.second);
                    minfreq=min(minfreq,x.second);
                }
                ans+=maxfreq-minfreq;
            }
        }
        return ans;
    }
};
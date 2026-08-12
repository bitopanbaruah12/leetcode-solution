class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        vector<pair<char,int>> v;

        for(auto x:mp){
            v.push_back(x);
        }
        sort(v.begin(),v.end(),[](auto a,auto b){
            return a.second >b.second;
        });
        string ans;

        for(auto x:v){
            for(int i=0;i<x.second;i++){
                ans+=x.first;
            }
        }
        return ans;
    }
};
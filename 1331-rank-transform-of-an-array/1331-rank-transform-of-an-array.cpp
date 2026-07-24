class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans=arr;
        sort(arr.begin(),arr.end());
        map<int,int> rank;
        int r =1;
        for(int i=0;i<arr.size();i++){
            if(rank.find(arr[i])==rank.end()){
                rank[arr[i]]=r;
                r++;
            }
        }
        for(int i=0;i<ans.size();i++){
            ans[i]=rank[ans[i]];
        }
        return ans;
    }
};
class Solution {
public:
    bool check(vector<int>& nums) {
        int j=-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                j=i-1;
                break;
            }
        }
        vector<int> ans;
        for(int i=j+1;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int k=0;k<=j;k++){
            ans.push_back(nums[k]);
        }
        for(int i=1;i<nums.size();i++){
            if(ans[i-1]>ans[i]){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int k;
        int ans=INT_MAX;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                k=i;
               ans=min(ans,abs(k-start));

            }
        }
       
        return ans;
    }
};
class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];
        int i=1;
        vector<int> base;
        while(i<=n){
            base.push_back(i);
            i++;

        }
        base.push_back(n);
        if(base==nums){
            return true;
        }
        return false;

    }
};
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int small=nums[0];
        int large=nums[nums.size()-1];
        if(small==0){
            return large;
        }
        while(large%small!=0){
            int rem=large%small;
            large=small;
            small=rem;
        }
        return small;
    }
};
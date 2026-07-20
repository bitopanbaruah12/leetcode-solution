class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int total=0;
            while(n>0){
                total=total+n%10;
                n/=10;
            }
            ans.push_back(total);
        }
        int min_number=INT_MAX;
        for(int x:ans){
            min_number=min(min_number,x);
        }
        return min_number;
    }
};
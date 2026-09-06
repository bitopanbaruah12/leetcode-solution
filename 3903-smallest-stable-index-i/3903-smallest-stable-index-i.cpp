class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();

        for(int i=0;i<n;i++){
            int max_1=INT_MIN;
            int min_1=INT_MAX;
            for(int j=0;j<=i;j++){
                max_1=max(max_1,nums[j]);
            }
            for(int p=i;p<=n-1;p++){
                min_1=min(min_1,nums[p]);
            }
            int score=max_1-min_1;
            if(score<=k){
                return i;

            }
        }
        return -1;
        
    }
};
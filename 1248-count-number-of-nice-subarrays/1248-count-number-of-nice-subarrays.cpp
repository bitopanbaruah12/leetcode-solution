class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 != 0) {
                nums[i] = 1;

            } else {
                nums[i] = 0;
            }
        }

        int left=0;
        int sum=0;
        int count_1=0;
        for(int right=0;right<n;right++){
            sum+=nums[right];

            while(sum>k){
                sum-=nums[left];
                left++;
            }
            count_1+=right-left+1;
        }
        if(k==0){
            return count_1;
        }
        left=0;
         sum=0;
        int count_2=0;
        for(int right=0;right<n;right++){
            sum+=nums[right];

            while(sum>k-1){
                sum-=nums[left];
                left++;
            }
            count_2+=right-left+1;
        }

        return count_1-count_2;
    }
};
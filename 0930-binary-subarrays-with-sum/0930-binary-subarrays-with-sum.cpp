class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int left=0;
        int sum=0;
        int count_1=0;
        int count_2=0;

        if(goal<0){
            return 0;
        }


        for(int right=0;right<n;right++){
            sum+=nums[right];

            while(sum>goal){
                sum-=nums[left];
                left++;
            }
            count_1+=right-left+1;


        }

        if(goal==0){
            return count_1;
        }
        left=0;
        sum=0;

        for(int right=0;right<n;right++){
            sum+=nums[right];

            while(sum>goal-1){
                sum-=nums[left];
                left++;
            }
            count_2+=right-left+1;


        }
        return count_1-count_2;
    }
};
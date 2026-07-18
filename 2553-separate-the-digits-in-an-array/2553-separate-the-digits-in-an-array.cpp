class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;
        
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                answer.push_back(0);
            }
            int n=nums[i];
            vector<int> support;
            while(n>0){
                support.push_back(n%10);
                n/=10;

            }
            for(int j=support.size()-1;j>=0;j--){
                answer.push_back(support[j]);

            }
            
        }
        return answer;
    }
};
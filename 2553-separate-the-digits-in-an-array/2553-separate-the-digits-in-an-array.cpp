class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;
        
        
        for(int i=0;i<nums.size();i++){
            int x =nums[i];
            if (x == 0) {
                answer.push_back(0);
                continue;
            }

            int div = 1;
            while (x / div >= 10)
                div *= 10;

            while (div > 0) {
                answer.push_back(x / div);
                x %= div;
                div /= 10;
            }
            
        }
        return answer;
    }
};
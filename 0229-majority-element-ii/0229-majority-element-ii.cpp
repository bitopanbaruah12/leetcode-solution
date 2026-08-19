class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate1 = 0;
        int candidate2 = 0;

        int count1 = 0;
        int count2 = 0;

        for (int i : nums) {
            if (i == candidate1) {
                count1++;
            } else if (candidate2 == i) {
                count2++;
            }

            else if (count1 == 0) {
                candidate1 = i;
                count1++;

            } else if (count2 == 0) {
                candidate2 = i;
                count2++;

            } else {
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;

        for (int i : nums) {
            if (i == candidate1) {
                count1++;
            } else if (i == candidate2) {
                count2++;
            }
        }
        vector<int> ans;

        if (count1 > n / 3) {
            ans.push_back(candidate1);
        } 
         if (count2 > n / 3) {
            ans.push_back(candidate2);
        }
        return ans;
    }
};
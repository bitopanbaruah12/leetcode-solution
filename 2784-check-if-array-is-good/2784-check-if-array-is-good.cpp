class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums[nums.size() - 1];
        int i = 1;
        if (nums.size() != n + 1) {
            return false;
        } else {
            for (int j = 0; j < nums.size(); j++) {
                if (i != nums[j]) {
                    return false;
                };
                if (i == n) {
                    i = n;
                } else {
                    i++;
                }
            }
        }

        return true;
    }
};
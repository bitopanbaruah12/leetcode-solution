class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n, -1);

        for (int i = 2 * n - 1; i >= 0; i--) {
            if (i >= n) {
                while (!st.empty() && nums[i % n] >= st.top()) {
                    st.pop();
                }
                st.push(nums[i % n]);

            }

            else {
                while (!st.empty() && nums[i] >= st.top()) {
                    st.pop();
                }
                if (st.empty()) {
                    ans[i] = -1;
                } else {

                    ans[i] = st.top();
                }
                st.push(nums[i]);
            }
        }
        return ans;
    }
};
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;

        vector<int> NSE(n, n), PSE(n, -1);
        // PSE
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            if (st.empty()) {
                PSE[i] = -1;
            } else {
                PSE[i] = st.top();
            }
            st.push(i);
        }
        while (!st.empty()) {
            st.pop();
        }
        // NSE
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }
            if (st.empty()) {
                NSE[i] = n;
            } else {
                NSE[i] = st.top();
            }
            st.push(i);
        }
        vector<int> NGE(n, n), PGE(n, -1);
        // PGE
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            if (st.empty()) {
                PGE[i] = -1;
            } else {
                PGE[i] = st.top();
            }
            st.push(i);
        }
        while (!st.empty()) {
            st.pop();
        }
        // NSE
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }
            if (st.empty()) {
                NGE[i] = n;
            } else {
                NGE[i] = st.top();
            }
            st.push(i);
        }
        long long summax = 0;
        long long summin = 0;
        for (int i = 0; i < n; i++) {
            long long LEFT = i - PSE[i];
            long long RIGHT = NSE[i] - i;

            summax += 1LL*nums[i] * LEFT * RIGHT;
            LEFT = i - PGE[i];
            RIGHT = NGE[i] - i;

            summin += 1LL*nums[i] * LEFT * RIGHT;
        }
        long long ans = summax - summin;
        return ans;
    }
};
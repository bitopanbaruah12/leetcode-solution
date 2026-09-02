class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector < pair<int, int>> starts;

        for (int i = 0; i < n; i++) {
            starts.push_back({intervals[i][0], i});
        }
        vector<int> ans;

        sort(starts.begin(), starts.end());
        for (int i = 0; i < n; i++) {
            int target = intervals[i][1];
            int low = 0;
            int high = n - 1;
            int index = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (starts[mid].first >= target) {
                    index = starts[mid].second;
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
            ans.push_back(index);
        }
        return ans;
    }
};
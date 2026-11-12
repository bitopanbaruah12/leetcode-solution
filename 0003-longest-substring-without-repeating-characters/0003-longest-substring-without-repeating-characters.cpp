class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int right = 0;
        int maxi = 0;

        unordered_map<char, int> mp;

        for (right = 0; right < n; right++) {
            mp[s[right]]++;

            while (mp[s[right]]>1) {
                mp[s[left]]--;
                left++;
            }
            int length = right - left + 1;
            maxi = max(maxi, length);
        }

        return maxi;
    }
};
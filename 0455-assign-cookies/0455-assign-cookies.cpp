class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int left_g = 0;
        int left_s = 0;
        int count = 0;

        while (left_g < g.size() && left_s < s.size()) {

            if (s[left_s] >= g[left_g]) {
                count++;
                left_g++ ;
                left_s++;

            } else {
                left_s++;
            }
        }
        return count;
    }
};
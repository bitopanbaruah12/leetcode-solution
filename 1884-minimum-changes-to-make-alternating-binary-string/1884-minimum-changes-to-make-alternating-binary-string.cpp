class Solution {
public:
    int minOperations(string s) {

        int mismatch_1 = 0;
        int mismatch_2 = 0;
        string pattern_1;
        string pattern_2;
        pattern_1.push_back('1');
        pattern_2.push_back('0');
        for (int i = 1; i < s.length(); i++) {
            if (pattern_1[i - 1] == '1') {
                pattern_1.push_back('0');

            } else {
                pattern_1.push_back('1');
            }
        }
        for (int i = 1; i < s.length(); i++) {
            if (pattern_2[i - 1] == '1') {
                pattern_2.push_back('0');

            } else {
                pattern_2.push_back('1');
            }
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != pattern_1[i]) {
                mismatch_1++;
            }
            if (s[i] != pattern_2[i]) {
                mismatch_2++;
            }
        }
        return min(mismatch_1, mismatch_2);
    }
};
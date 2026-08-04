class Solution {
public:
    string removeOuterParentheses(string s) {
        int depth = 0;
        string p;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] =='(') {
                depth++;
                if (depth > 1) {
                    p.push_back(s[i]);
                }
            } else {
                depth--;
                if (depth > 0) {
                    p.push_back(s[i]);
                }
            }
        }
        s=p;
        return s;
    }
};
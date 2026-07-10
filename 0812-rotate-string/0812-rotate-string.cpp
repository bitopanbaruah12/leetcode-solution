class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;

        }
        for (int i = 0; i < 2*s.length(); i++) {
            if (goal[0] != s[i%(s.length())]) {
                char first = s[0];
                for (int i = 0; i < s.length() - 1; i++) {
                    s[i] = s[i + 1];
                }
                s[s.length() - 1] = first;
            }
            if (s == goal) {
                return true;
            }
        }

        return false;
    }
};
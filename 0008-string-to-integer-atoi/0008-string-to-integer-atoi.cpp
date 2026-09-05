class Solution {
public:
    int solve(string& s, int i, long long num, int sign) {
        if (i >= s.size() || !isdigit(s[i])) {
            return sign * num;
        }
        num = num * 10 + (s[i] - '0');
        if (sign * num > INT_MAX) {
            return INT_MAX;
        }
        if (sign * num < INT_MIN) {
            return INT_MIN;
        }
        return solve(s, i + 1, num, sign);
    }
    int myAtoi(string s) {
        int sign = 1;
        int i = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        if (i < s.size() && s[i] == '-') {
            sign = -1;
            i++;
        } else if (i < s.size() && s[i] == '+') {
            i++;
        }

        return solve(s, i, 0, sign);
    }
};
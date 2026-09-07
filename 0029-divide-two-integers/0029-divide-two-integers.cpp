class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        if (dividend == INT_MIN && divisor == 1) {
            return INT_MIN;
        }

        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        int ans = 0;

        while (a >= b) {

            long long temp = b;
            int count = 1;

            while ((temp << 1) <= a) {
                temp = temp << 1;
                count = count << 1;
            }
            a = a - temp;

            ans = ans + count;
        }
        bool negative = (dividend < 0) ^ (divisor < 0);

        if (negative) {
            return -ans;
        }
        return ans;
    }
};
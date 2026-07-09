class Solution {
public:
    int mirrorDistance(int n) {
        int N = n;
        int reverse;
        while (n > 0) {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        return abs(N-reverse);
    }
};
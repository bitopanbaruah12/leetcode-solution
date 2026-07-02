class Solution {
public:
    int binaryGap(int n) {
        int ans;

        vector<int> binary;
        while (n > 0) {
            binary.insert(binary.begin(), n % 2);
            n /= 2;
        }
        int count = 0;
        int Max = 0;
        for (int i = 1; i < binary.size(); i++) {
            if (binary[i] == 1) {
                count++;
                Max = max(count, Max);
                count = 0;

            } else {
                count++;
            }

            ans = Max;
        }
        return ans;
    }
};
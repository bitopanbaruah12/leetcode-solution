class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int k;
        int n = words.size();
        int ans = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                k = i;
                int clockwise = (k - startIndex + n) % n;
                int anticlockwise = (startIndex - k + n) % n;
                int dif = min(clockwise, anticlockwise);
                ans = min(ans, dif);
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};
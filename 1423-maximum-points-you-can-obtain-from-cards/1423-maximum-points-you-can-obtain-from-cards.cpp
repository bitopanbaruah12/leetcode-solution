class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int left = 0;
        int right = n - k - 1;

        int total = 0;
        for (int i = 0; i < n; i++) {
            total += cardPoints[i];
        }
        if(k==n){
            return total;
        }
        int windowsum = 0;
        for (int i = 0; i < n - k; i++) {
            windowsum += cardPoints[i];
        }

        int maxsum =total-windowsum;
        while (right < n-1) {

            int currentsum = total - windowsum;
            maxsum = max(maxsum, currentsum);
            right++;
            windowsum+=cardPoints[right];
            windowsum-=cardPoints[left];
            left++;
            
        }
        maxsum = max(maxsum, total - windowsum);
        return maxsum;
    }
};
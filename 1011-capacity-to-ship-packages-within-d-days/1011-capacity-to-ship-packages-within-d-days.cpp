class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);
        int min;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int daysneeded = 1;
            int currentweights = 0;
            for (int i = 0; i < n; i++) {
                if (currentweights+weights[i] > mid) {
                    daysneeded++;
                    currentweights = 0;

                } 
                    currentweights += weights[i];
                
            }
            if(daysneeded<=days){
                min=mid;
                high=mid-1;

            }
            else{
                low=mid+1;
            }
        }
        return min;
    }
};
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int low= *min_element(bloomDay.begin(),bloomDay.end());
        int high= *max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        if((long long)m*k>n){
            return -1;
        }

        while(low<=high){
            int mid=low+(high-low)/2;
            int flowers=0;
            int bouquets=0;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid){
                    flowers++;
                    if(flowers==k){
                        bouquets++;
                        flowers=0;
                    }
                }
                else{
                    flowers=0;
                }
            }
            if(bouquets>=m){
                high=mid-1;
                ans=mid;

            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
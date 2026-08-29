class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int low=0;
            int high=m-1;

            while(low<high){
                int mid=(low+high)/2;
                if(mat[mid][i]<mat[mid+1][i]){
                    low=mid+1;
                }
                else{
                    high=mid;
                }
            }
            
            if(i>0&&mat[low][i-1]>mat[low][i]){
                continue;
            }
            if(i<n-1&&mat[low][i+1]>mat[low][i]){
                continue;
            }

            return {low,i};
        }
        return {-1,-1};
    }
};
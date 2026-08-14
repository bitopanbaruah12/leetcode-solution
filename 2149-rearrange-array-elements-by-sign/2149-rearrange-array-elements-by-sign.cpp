class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        vector<int> ans;

        for(int x:nums){
            if(x>0){
                pos.push_back(x);
            }
            else{
                neg.push_back(x);
            }

        }
        int j=0;
        int k=0;

        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                ans.push_back(pos[j]);
                j++;
            }
            else{
                ans.push_back(neg[k]);
                k++;
            }
        }
        return ans;
    }
};
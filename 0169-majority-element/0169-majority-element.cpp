class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int candidate=0;
        int count=0;

        for(int i:nums){
            if(i==candidate){
                count++;
            }
            else if(count==0){
                candidate=i;
                count=1;
            }
            else{
                count--;
            }
        }
        count=0;
        for(int i:nums){
            if(candidate==i){
                count++;
            }
        }
        

        if(count>n/2){
            return candidate;
        }
        return candidate;
    }
};
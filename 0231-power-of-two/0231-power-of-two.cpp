class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count_1=0;
        if(n<=0){
            return false;
        }
        while(n>0){
            int reminder=n%2;
            if(reminder==1){
                count_1++;
            }
            n/=2;
        }
        if(count_1==1){
            return true;
        }
        return false;
    }
};
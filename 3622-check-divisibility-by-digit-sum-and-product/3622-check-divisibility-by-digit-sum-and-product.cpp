class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int  sum=0;
        int product=1;
        while(n>0){
            int reminder=n%10;
            sum+=reminder;
            product*=reminder;
            n/=10;
        }
        int sum_d=product+sum;
        if(x%sum_d==0){
            return true;
        }
        return false;
    }
};
class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        long long multi=1;
        while(n>0){
            if(n%10!=0){
                x+=(n%10)*multi;
                multi*=10;
            

            }   
             n/=10;

        }
        long long sum=0;
        long long y=x;
        while(x>0){
            sum+=x%10;
            x/=10;
        }
        return sum*y;
    }
};
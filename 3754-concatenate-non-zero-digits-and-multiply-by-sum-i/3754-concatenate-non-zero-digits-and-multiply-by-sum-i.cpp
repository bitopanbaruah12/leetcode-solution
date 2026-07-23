class Solution {
public:
    long long sumAndMultiply(int n) {
        long long int x=0;
        long long int multi=1;
        while(n>0){
            if(n%10!=0){
                x+=(n%10)*multi;
                multi*=10;
            

            }   
             n/=10;

        }
        long long int sum=0;
        long long int y=x;
        while(x>0){
            sum+=x%10;
            x/=10;
        }
        return sum*y;
    }
};
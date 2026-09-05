class Solution {
public:
    long long power(long long x,long long second ){
        long long MOD=1000000007;
        if(second==0){
            return 1;
        }
        long long half=power(x,second/2);
        half=(half*half)%MOD ;
        if(second%2==1){
            half=(half*x)%MOD;
        }
        return half;
    }
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n/2;

        long long ans1=power(5,even);
        long long ans2=power(4,odd);
        return ans1*ans2%1000000007;
    }
};
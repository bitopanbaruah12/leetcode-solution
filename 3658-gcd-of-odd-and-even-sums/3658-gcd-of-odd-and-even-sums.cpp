class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0;
        int sumEven=0;
        int j=1;
        int k=2;
        for(int i=0;i<n;i++){
          sumOdd+=j;
          j+=2;
          sumEven+=k;
          k+=2;
        }
        int a=max(sumOdd,sumEven);
        int b=min(sumOdd,sumEven);
        int rem;
        if(b==0){
            return a;
        }
        while(a%b!=0){
            rem=a%b;
            a=b;
            b=rem;

        }
        return b;
    }
};
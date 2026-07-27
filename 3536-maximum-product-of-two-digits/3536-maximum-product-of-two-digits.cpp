class Solution {
public:
    int maxProduct(int n) {
        int first=-1;
        int second=-1;
        
        while (n > 0) {
            int digits=n%10;
            if(digits>=first){
                second=first;
                first=digits;
            }
            else if(digits>second){
                second=digits;
            }
           n/=10;
        }
       return first*second;
    }
};
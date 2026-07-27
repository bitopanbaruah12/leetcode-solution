class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;
        while (n > 0) {
            digits.push_back(n % 10);
            n /= 10;
        }
        int maximum=INT_MIN;
        for(int i=0;i<digits.size();i++){
            for(int j=0;j<digits.size();j++){
                if(i==j){
                    continue;
                }
                maximum=max(maximum,digits[i]*digits[j]);
            }
        }
        return maximum;
    }
};
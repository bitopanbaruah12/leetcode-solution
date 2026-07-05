class Solution {
public:
    int bitwiseComplement(int n) {
        vector<int> binary;
        if(n==0){
            return 1;
        }
        while (n > 0) {
            binary.push_back(n % 2);
            n = n / 2;
        }
        for (int i = 0; i < binary.size(); i++) {
            if (binary[i] == 1) {
                binary[i] = 0;
            } else {
                binary[i] = 1;
            }
        }
        int multi = 1;
        int total = 0;

        for (int i = 0; i < binary.size(); i++) {
            total = total + binary[i] * multi;
            multi = multi * 2;
        }
        return total;
    }
};
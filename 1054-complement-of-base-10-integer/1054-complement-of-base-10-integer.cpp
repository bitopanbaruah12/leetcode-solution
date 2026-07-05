class Solution {
public:
    int bitwiseComplement(int n) {
        int multi=1;
        int total=0;
        if(n==0){
            return 1;
        }
        while(n>0){
            int reminder=n%2;
            if(reminder==1){
                reminder=0;
                total=total+(reminder)*multi;

            }
            else{
                reminder=1;
                total=total+reminder*multi;
            }
            n/=2;
            multi*=2;
        }
        return total;
    }
};
class Solution {
public:
    string largestOddNumber(string num) {
        string ans;
        int pos=-1;
        for(int i=num.length()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                pos=i;
                break;
            }

        }
        if(pos==-1){
            return "";
        }
        for(int i=0;i<=pos;i++){
            ans+=num[i];
        }
        return ans;

    }
};
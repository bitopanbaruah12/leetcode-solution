class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=1;

        for(int i=1;i<s.length();i++){
            if(s[i]=='1'){
                count++;
            }
            if(s[i]==s[i-1]&&s[i]=='1'){
                count--;

            }
        }
        if(count==1){
            return true;
        }
        return false;
    }
};
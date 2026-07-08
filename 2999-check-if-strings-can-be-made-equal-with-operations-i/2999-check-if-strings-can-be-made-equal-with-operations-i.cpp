class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        for(int i=0;i<s1.length();i++){ 
            if(i+2>=s1.length()){
                return false;
            }
           if(s1[i]!=s2[i]){
            swap(s1[i],s1[i+2]);
           }
            if(s1==s2){
                return true;

            }
           
        }
        return false;
    }
};
class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string ans;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]==' '){
                ans+=temp;
                ans+=' ';

                temp.clear();
            }
            else{
                temp.insert(temp.begin(),s[i]);
            }
        }
        ans+=temp;
      int count=0;
      int i=0;
      while(i<ans.length()){
        if(ans[i]==' '){
            count++;
        }
        else{
            count=0;
        }
        if(count>1){
            ans.erase(i,1);
            count--;
        }
        else{
            i++;
        }
      }
      if(ans[0]==' '){
        ans.erase(0,1);
      }
      if(ans.back()==' '){
        ans.pop_back();

      }

        
        return ans;
    }
};
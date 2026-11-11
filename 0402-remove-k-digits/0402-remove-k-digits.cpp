class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char> st;

        if (k == n) {
            return "0";
        }

        for (int i = 0; i < n; i++) {
            while (!st.empty() && k > 0 && num[i] < st.top()) {
                st.pop();
                k--;
            }

            st.push(num[i]);
            
        }

        if (k >0) {
            while (!st.empty() && k >0) {
                st.pop();
                k--;
            }
        }
        string ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        for(int i=ans.size()-1;i>=0;i--){
            if(ans[i]=='0'){
                ans.pop_back();
            }
            else{
                break;
            }
        }
        if(ans.size()==0){
            return "0";
        }
        reverse(ans.begin(), ans.end());
       
        return ans;
    }
};
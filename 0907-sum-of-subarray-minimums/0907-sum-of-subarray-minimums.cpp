class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> NSE(n, -1);
        vector<int> PSE(n, -1);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[i] <= arr[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                NSE[i] = n;
            } else {
                NSE[i] = st.top();
            }
            st.push(i);
        }
        while (!st.empty()) {
            st.pop();
        }
        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[i] <arr[st.top()]) {
                st.pop();
            }
            if (st.empty()) {
                PSE[i] = -1;
            } else {
                PSE[i] = st.top();
            }
            st.push(i);
        }
        long long contri=0;
        int mod=1e9+7;
        
        for(int i=0;i<n;i++){
            long long LEFT=i-PSE[i];
            long long RIGHT=NSE[i]-i;
            contri=(contri+1LL*arr[i]*LEFT*RIGHT)%mod;
        }
        return contri;
    }
};
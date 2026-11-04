class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;
        for (int x : asteroids) {
            bool x_destroyed = false;
            if (x < 0) {
                while (!st.empty() && st.top() > 0 && x < 0) {
                    if (abs(st.top()) < abs(x)) {
                        st.pop();

                    } else if (abs(st.top()) > abs(x)) {
                        x_destroyed = true;
                        break;
                    } else {
                        x_destroyed = true;
                        st.pop();
                        break;
                    }
                }
            }
            if (!x_destroyed) {

                st.push(x);
            }
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
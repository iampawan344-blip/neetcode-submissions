
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int> st;

        for(int i = 0; i < as.size(); i++) {
            int val = as[i];

            while(!st.empty() && st.top() > 0 && val < 0) {
                int stval = st.top();

                if(stval < abs(val)) {
                    st.pop();
                }
                else if(stval == abs(val)) {
                    st.pop();
                    val = 0;
                    break;
                }
                else {
                    val = 0;
                    break;
                }
            }

            if(val != 0) {
                st.push(val);
            }
        }

        vector<int> ans;

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

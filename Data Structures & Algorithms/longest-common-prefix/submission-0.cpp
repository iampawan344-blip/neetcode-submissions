class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string sm = strs[0];

        for(auto &s : strs) {
            int i = 0;

            while(i < sm.size() && i < s.size() && sm[i] == s[i]) {
                i++;
            }

            sm = sm.substr(0, i);

            if(sm.empty()) return "";
        }

        return sm;
    }
};
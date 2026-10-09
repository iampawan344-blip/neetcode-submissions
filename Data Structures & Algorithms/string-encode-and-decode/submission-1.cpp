
class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";

        for (string s : strs) {
            ans += s + "#@*";
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string temp = "";
        int i = 0;

        while (i < s.size()) {
            if (i + 2 < s.size() &&
                s.substr(i, 3) == "#@*") {
                ans.push_back(temp);
                temp = "";
                i += 3;
            } else {
                temp += s[i];
                i++;
            }
        }

        return ans;
    }
};

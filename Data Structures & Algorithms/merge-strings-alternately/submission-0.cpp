
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";

        for (int i = 0; i < min(word1.size(), word2.size()); i++) {
            str.push_back(word1[i]);
            str.push_back(word2[i]);
        }

        int n = word1.size();
        int m = word2.size();

        if (n > m) {
            int j = m;
            while (j < n) {
                str.push_back(word1[j++]);
            }
        } else {
            int j = n;
            while (j < m) {
                str.push_back(word2[j++]);
            }
        }

        return str;
    }
};

class Solution {
public:
    typedef pair<int, char> p;

    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
            if (mp[ch] > (n + 1) / 2)
                return "";
        }

        priority_queue<p> pq;

        for (auto &it : mp) {
            pq.push({it.second, it.first});
        }

        string res = "";

        while (pq.size() >= 2) {
            p first = pq.top();
            pq.pop();

            p second = pq.top();
            pq.pop();

            res += first.second;
            res += second.second;

            first.first--;
            second.first--;

            if (first.first > 0)
                pq.push(first);

            if (second.first > 0)
                pq.push(second);
        }

        if (!pq.empty()) {
            if (pq.top().first > 1)
                return "";

            res += pq.top().second;
        }

        return res;
    }
};
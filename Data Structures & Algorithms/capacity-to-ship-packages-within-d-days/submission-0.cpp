
class Solution {
public:
    bool ispossible(vector<int>& weights, int days, int cap) {
        int day = 1;
        int load = 0;

        for (int w : weights) {
            if (load + w > cap) {
                day++;
                load = w;
            } else {
                load += w;
            }
        }

        return day <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);

        while (l < r) {
            int mid = l + (r - l) / 2;

            if (ispossible(weights, days, mid)) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }

        return l;
    }
};

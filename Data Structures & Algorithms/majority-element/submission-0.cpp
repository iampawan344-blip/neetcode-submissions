class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(auto &it : nums) {
            mp[it]++;
        }

        for(auto &it : mp) {
            int val = it.first;
            int freq = it.second;

            if(freq > nums.size() / 2) {
                return val;
            }
        }

        return -1;
    }
};
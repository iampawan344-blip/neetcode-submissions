class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n, 1);
        vector<int> right(n, 1);
        vector<int> ans(n);

        int pro = 1;

        for (int i = 0; i < n; i++) {
            left[i] = pro;
            pro *= nums[i];
        }

        pro = 1;

        for (int i = n - 1; i >= 0; i--) {
            right[i] = pro;
            pro *= nums[i];
        }

        for (int i = 0; i < n; i++) {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};
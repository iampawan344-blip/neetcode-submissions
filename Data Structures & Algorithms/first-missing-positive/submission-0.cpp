class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>st(nums.begin(),nums.end());
        int curr=1;
        for(auto &it:st){
        if(it<curr)continue;
        if(it==curr)curr++;
        else return curr;}return curr;
    }
};
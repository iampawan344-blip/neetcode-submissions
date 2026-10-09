class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;

        unordered_set<int>st(nums.begin(),nums.end());int maxi=INT_MIN;
        for(auto &x:st){
            if(st.find(x-1)==st.end()){
                int curr=x;
                int len=1;
                while(st.find(curr+1)!=st.end()){
                    curr++;len++;
                }maxi=max(maxi,len);
            }
        }return maxi;
        
    }
};
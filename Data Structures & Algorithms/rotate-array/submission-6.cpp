class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans;int i=0;   
        int n=nums.size();
        if(n==0)return;k=k%n;
        int m=n-k;
        
     
        while(m<n){
            ans.push_back(nums[m++]);
        }while(i<n-k){
            ans.push_back(nums[i++]);
        }nums=ans;
        
    }
};
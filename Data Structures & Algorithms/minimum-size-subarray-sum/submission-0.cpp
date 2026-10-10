class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int l=0;int r=0;int n=nums.size();
        int result=INT_MAX;
        int sum=0;
        while(r<n){

            sum+=nums[r];
            while(sum>=target){
                result=min(result,r-l+1);
                sum-=nums[l];  
                l++;
              
            }r++;

        }if(result<INT_MAX) return result;return 0;

        
    }
};
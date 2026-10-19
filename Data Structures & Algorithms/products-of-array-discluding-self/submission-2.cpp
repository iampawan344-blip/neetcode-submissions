class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1;
        vector<int>ans;int count=0;
        for(int i=0;i<nums.size();i++){
            pro*=nums[i];
        }int pwz=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;continue;
            }
            else pwz*=nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0&&count==1)ans.push_back(pwz);
            else if(count>1)ans.push_back(0);
            else ans.push_back(pro/nums[i]);
        }return ans;

    }
};

class Solution {
public:
int find1(int l,int r,vector<int>&nums,int target){
while(l<=r){
    int mid=l+(r-l)/2;
    if(nums[mid]>target){
        r=mid-1;
    }else if(nums[mid]<target)l=mid+1;
    else return mid;
}return -1;
}
    int search(vector<int>& nums, int target) {
       int l=0;int r=nums.size()-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r]){
               l=mid+1;
            }else r=mid;
        }
        int target1=find1(l,nums.size()-1,nums,target);
        int target2=find1(0,l-1,nums,target);
        if(target1!=-1)return target1;
        else if(target2!=-1) return target2;
        return -1;
        
    }
};

        
        
 
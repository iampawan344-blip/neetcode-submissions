class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int n=nums1.size();
        int m=nums2.size();
        int idx1=(m+n)/2;
        int el1=-1;
        int idx2=(m+n)/2-1;
        int el2=-1;
        int k=0;
        int i=0;
        int j=0;
        while(i<n&&j<m){
            if(nums1[i]<nums2[j]){
                if(idx1==k){
                    el1=nums1[i];
                }
                if(idx2==k){
                    el2=nums1[i];
                }
                i++;
            }else{
                if(idx1==k){
                    el1=nums2[j];
                }
                if(idx2==k){
                    el2=nums2[j];
                }
                j++;
            }k++;
        }
        while(i<n){
            if(idx1==k){
                el1=nums1[i];
            }if(idx2==k){
                el2=nums1[i];
            }i++;k++;
        }
              while(j<m){
            if(idx1==k){
                el1=nums2[j];
            }if(idx2==k){
                el2=nums2[j];
            }j++;k++;
        }
        
        
        if((m+n)%2==1){
            return el1;
        }else return (el2+el1)/2.0;return -1;
        
    }
};

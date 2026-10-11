class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;int r=matrix.size()*matrix[0].size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            int ro=mid/matrix[0].size();
            int c=mid%matrix[0].size();
            if(matrix[ro][c]==target) return true;
            else if(matrix[ro][c]>target)r=mid-1;
            else l=mid+1;
        }return false;
        
    }
};

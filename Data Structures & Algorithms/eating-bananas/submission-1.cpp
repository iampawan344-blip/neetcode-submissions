class Solution {
public:
bool ispos(int mid,vector<int>&piles,int h){

    int tota=0;
    for(int i=0;i<piles.size();i++){
       tota += ceil((double)piles[i] / mid);

    }return tota<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {

        int r=*max_element(piles.begin(),piles.end());
        int ans=r;
        int l=1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(ispos(mid,piles,h)){
                ans=mid;
                r=mid-1;
            }else l=mid+1;
        }return ans;

    }
};

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int,double>>res;
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            res.push_back({position[i],time});
        }sort(res.rbegin(),res.rend());
        stack<double>st;
        for(int i=0;i<position.size();i++){
            double time=res[i].second;
            if(st.empty()||st.top()<time){
                st.push(time);
            }
        }return st.size();
        
    }
};
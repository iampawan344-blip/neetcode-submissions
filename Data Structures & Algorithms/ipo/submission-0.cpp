class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<int>pq;
        vector<vector<int>>res;
        for(int i=0;i<capital.size();i++){
            int v=capital[i];
            int g=profits[i];
            res.push_back({v,g});
        }sort(res.begin(),res.end());int j=0;
        for(int i=0;i<k;i++){
           while (j < res.size() && res[j][0] <= w) {
                pq.push(res[j][1]);
                j++;
            }   if (pq.empty()) break;
              w += pq.top();
            pq.pop();
        }return w;
        
    }
};
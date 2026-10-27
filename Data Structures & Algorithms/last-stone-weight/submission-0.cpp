class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
        for(auto &it:stones){
            pq.push(it);
        }while(pq.size()>1){
            int el1=pq.top();pq.pop();
            int el2=pq.top();pq.pop();
            int el3=el1-el2;
            
            pq.push(el3);
        }return pq.top();
        
    }
};
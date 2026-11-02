
class Solution {
public:
    void dfs(int node, unordered_map<int, vector<int>>& adj,
             vector<int>& vis) {

        vis[node] = 1;

        for(auto &it : adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, vis);
            }
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {

        unordered_map<int, vector<int>> adj;

        for(auto &e : edges) {
            int u = e[0];
            int v = e[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n, 0);
        int count = 0;

        for(int i = 0; i < n; i++) {

            if(!vis[i]) {
                count++;
                dfs(i, adj, vis);
            }
        }

        return count;
    }
};

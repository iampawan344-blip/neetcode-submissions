class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;int n=grid.size();int m=grid[0].size();
    for(int i=0;i<grid.size();i++){
     for(int j=0;j<grid[0].size();j++){
        if(grid[i][j]==0)q.push({i,j});
    }
  }       vector<pair<int,int>> dir = {
            {-1, 0},
            {1, 0},
            {0, -1},
            {0, 1}
        };
  while(!q.empty()){
    auto [r,c]=q.front();
    q.pop();
    for(auto [dr,dc]:dir){
        int nr=dr+r;
        int nc=dc+c;
        if(nr>=0&&nc>=0&&nr<n&&nc<m&&grid[nr][nc]==INT_MAX){
            grid[nr][nc]=grid[r][c]+1;
            q.push({nr,nc});

        }
    }
  }
        
    }
};

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>>visited(m, vector<int>(n, 0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j]==2){
                    q.push({{i,j},0});
                    visited[i][j]=2;
                }
            }
        }
        int time=0;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        while(!q.empty()){
            auto it=q.front();
            int r=it.first.first;
            int c=it.first.second;
            int t=it.second;

            time=max(time,t);
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nc>=0 && nr<m && nc<n && grid[nr][nc]==1 && !visited[nr][nc] ){
                       q.push({{nr,nc},t+1});
                       visited[nr][nc]=1;
                       grid[nr][nc]=2;
                }
            }

          

        }
          for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(!visited[i][j] && grid[i][j]==1){
                        return -1;
                    }
                }
            }
            return time;


    }
};
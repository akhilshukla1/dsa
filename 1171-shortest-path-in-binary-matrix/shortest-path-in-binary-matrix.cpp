class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
       
        if(grid[0][0]==1 || grid[n-1][m-1]==1)return -1;

        int dr[]={-1,-1,0,1,1,1,0,-1};
        int dc[]={0,1,1,1,0,-1,-1,-1};

        queue<pair<int,pair<int,int>>>q;
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        q.push({1,{0,0}});
        dist[0][0]=0;


        

        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int d=it.first;
            int r=it.second.first;
            int c=it.second.second;
           if(r==n-1 && c==n-1)return d;
            for(int i=0;i<8;i++){
                int nr=r+dr[i];
                int nc=c+dc[i];
                if(nr>=0 && nr<n && nc>=0 && nc<n && grid[nr][nc]==0 && d+1<dist[nr][nc]){
                    dist[nr][nc]=d+1;
                    q.push({d+1,{nr,nc}});
                }
            }
            
        }


      return -1;

    }
};
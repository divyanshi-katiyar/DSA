class Solution {
public:
    int x[4]={-1,1,0,0};
    int y[4]={0,0,-1,1};
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        int fresh=0;
        int time=0;

        //Put all oranges in queue and fing total fresh oranges
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    grid[i][j]=-1;
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        while(!q.empty() and fresh>0){
            int size=q.size();
            while(size--){
                int r=q.front().first;
                int c=q.front().second;

                q.pop();

                for(int k=0;k<4;k++){
                    int row=r+x[k];
                    int col=c+y[k];

                    if(row>=0 && row<n && col>=0 && col<m && grid[row][col]==1){
                        q.push({row,col});
                        grid[row][col]=-1;
                        fresh--;
                    }
                }
            }
            time++;
            
        }
        if(fresh>0){
            return -1;
        }
        return time;

    }
};
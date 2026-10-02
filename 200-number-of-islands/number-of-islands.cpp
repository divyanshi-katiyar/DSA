class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        int n=grid.size();
        int m=grid[0].size();
        //Check Valid
        if(i<0||i>=n||j<0||j>=m||grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0'; //Mark as visited

        //Check all 4 directions
        dfs(grid,i-1,j); //Up
        dfs(grid,i+1,j); //Down
        dfs(grid,i,j-1); //Left
        dfs(grid,i,j+1); //Right
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(); //No of cols
        int m=grid[0].size(); //No of rows
        int count=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};
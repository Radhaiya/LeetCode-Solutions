class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size(),i,j;
        vector<int> col(n,INT_MIN),row(n,INT_MIN);
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                row[i] = max(row[i],grid[i][j]);
                col[j] = max(col[j],grid[i][j]);
            }
        }

        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans=ans+min(row[i],col[j])-grid[i][j];
            }
        }

        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
       int  n=mat.size()-1;
       int i=0;
        while(i<=n){
            for(int i=0;i<mat.size()-1;i++){
            for(int j=0;j<mat[i].size()-1;j++){
                 if(mat[i][j]>mat[i+1][j+1]){
                     swap(mat[i][j],mat[i+1][j+1]);
                 }
                
            }
        }
        i++;
        }

        return mat;
    }
};

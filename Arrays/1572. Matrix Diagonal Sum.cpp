class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         int leftsum=0;
         int n=mat.size()-1;
         int rightsum=0;
         int mid=(n+1)/2;
         for(int i=0;i<mat.size();i++){
              leftsum+=mat[i][i];
             
         }
        
        for(int i=0;i<mat.size();i++){
            rightsum+=mat[i][n-i];
            
            
        }

        if(mat.size()%2!=0){
               return rightsum+leftsum-mat[mid][mid];
        }
        else{
            return rightsum+leftsum;
        }

       
    }
};
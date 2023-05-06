class Solution {
    public int[][] largestLocal(int[][] grid) {

        int [][] ans =new int [grid.length-2][grid.length-2];

        for(int i=0;i<ans.length;i++){
            for(int j=0;j<ans.length;j++){

                int largest = 0;
                for(int row=i;row<=i+2;row++){
                    for(int col=j;col<=j+2;col++){
                        if(grid[row][col]>largest){
                            largest = grid[row][col];
                        }
                    }
                }

                ans[i][j] = largest;

            }
        }

        return ans;
    }
}
class Solution {
    public int[][] onesMinusZeros(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;

        int[] onesInRows = new int[m];
        int[] onesInCols = new int[n];

        for(int i=0;i<onesInRows.length;i++){
            onesInRows[i]=0;
        }
        for(int i=0;i<onesInCols.length;i++){
            onesInCols[i]=0;
        }

        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(grid[i][j]==1){
                    onesInRows[i]++;
                    onesInCols[j]++;
                }
            }
        }

        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[0].length;j++){
                grid[i][j] = onesInRows[i] + onesInCols[j] - (m-onesInRows[i]) - (n-onesInCols[j]) ;
            }
        }

         return grid;
     }


}
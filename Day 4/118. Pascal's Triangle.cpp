class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>triangle;
        vector<int>prevRow;
        
        for(int i = 0;i<numRows;i++){
            vector<int>currentRow(i+1,0);
            for(int j = 0;j<i+1;j++){
                //if we are on the edge the value is 1
                if(j == 0 or j ==i)
                    currentRow[j] = 1;
                //add elements from previous row
                else
                    currentRow[j] = prevRow[j-1]+prevRow[j];
            }
            //update previous row
            prevRow = currentRow;
            triangle.push_back(currentRow);
        }
        
        return triangle;
    }
};
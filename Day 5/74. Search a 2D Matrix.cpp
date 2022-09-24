class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int s=0,e=m*n-1;
        while (s<=e) {
            int mid=(s+e)>>1;
            if (target==matrix[mid/n][mid%n]) return true;
            if (target<matrix[mid/n][mid%n]) e=mid-1;
            else s=mid+1;
        }
        return false;
    }
};
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>X;
        for(int i=0;i<points.size();i++){
            X.push_back(points[i][0]);
        }

        sort(X.begin(),X.end());
        int ans=0;
        int temp=0;
        for(int i=0;i<X.size()-1;i++){
            temp=X[i+1]-X[i];
            if(temp>ans){
                ans=temp;
            }

        }
        return ans;
    }
};
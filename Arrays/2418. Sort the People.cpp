class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<heights.size()-1;i++){
            if(heights[i+1]>heights[i]){
                swap(heights[i+1],heights[i]);
                swap(names[i+1],names[i]);
                i=-1;
            }
        }
       

        return names;
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> m;
        
        for(int n : nums){
            
            m[n]++;
            
            if(m[n]>1)
                return true;
            }
         return false;
    }
};
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int count = 0;
        for(int i=0;i<nums.size();i++){
         nums[i]= count+nums[i];
         count=nums[i];
         }   
        return nums;
    }
};
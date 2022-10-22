class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     vector<int>tnums=nums;
     map<int,int>mp;
     
     for(int i=0;i<nums.size();i++){
          mp[tnums[i]]=i;
     }

     for(int i=0;i<nums.size();i++){
         nums[i]=mp[nums[i]];
     }

     return nums;
        
        
    }
};
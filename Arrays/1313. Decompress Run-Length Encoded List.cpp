//
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
         vector<int>ans;
        for(int i=0;i<nums.size();i=i+2){
            cout<<i;
             for(int j=1;j<=nums[i];j++){
               cout<<j;
               ans.push_back(nums[i+1]);
           }
          
        }
        
        return ans;
    }
};

//Optimal
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
         vector<int>ans;
        for(int i=0;i<nums.size()-1;i=i+2){
           vector<int>temp(nums[i],nums[i+1]);
          ans.insert(ans.end(),temp.begin(),temp.end());
            }
        return ans;
    }
};
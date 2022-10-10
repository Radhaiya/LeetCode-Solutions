class Solution {
public:
    int evendigits(int N){
        int ans=0;
        while(N>0){
            ans++;
            N=N/10;
        }
        return ans;
    }
  
     int findNumbers(vector<int>& nums) {
       int count=0;
       for(int i=0;i<nums.size();i++){
           if(evendigits(nums[i])%2==0){
               count++;
           }
       }
       return count;
    }
};
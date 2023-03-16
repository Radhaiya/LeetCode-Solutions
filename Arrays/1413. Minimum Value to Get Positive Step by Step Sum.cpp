class Solution {
public:
    int minStartValue(vector<int>& nums) {
         int s=0;
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i]+nums[i-1];
            
            cout<<s<<endl;
        }

        for(int i=0;i<nums.size();i++){
            if(s>nums[i]){
                s=nums[i];
            }
        }

        if(s<0){
            return 1-s;
        }
         else{
             return 1;
         }
               
    }
};
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int high=0;
        int low =0;
        int same =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                low++;
            }

            else if(nums[i]==pivot){
                same++;
            }
        }

          vector<int>ans(nums.size());
            high=low+same;
            same=low;
            low = 0;

            for(int i=0;i<nums.size();i++){
                if(nums[i]<pivot){
                    ans[low]=nums[i];
                    low++;
                }

                else if(nums[i]==pivot){
                    ans[same]=nums[i];
                    same++;
                }

                else{
                    ans[high]=nums[i];
                    high++;
                }
            
            }

            return ans;
    }
};
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int n=nums.size();
        int max=-999;
        for(int i=0;i<n/2;i++){
            int temp=0;
            temp=(nums[i]+nums[n-i-1]);
            if(temp>max){
                max=temp;
            }
        }return max;
    }
};
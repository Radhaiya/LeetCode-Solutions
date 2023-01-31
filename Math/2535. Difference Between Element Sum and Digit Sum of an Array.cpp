class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int sum2=0;
        for(auto x:nums){
   
            sum=sum+x;
            while(x){
                int digit = x%10;
                x=x/10;
                sum2 = sum2 + digit;
            }

        }
        return abs(sum-sum2);
    }
};
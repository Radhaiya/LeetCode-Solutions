class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int maxSum=0;
        sort(satisfaction.begin(),satisfaction.end());
        for(int i=0;i<satisfaction.size();i++){
            int sum=0;
            int num=1;
            for(int j=i;j<satisfaction.size();j++){
             sum = sum +satisfaction[j]*num;
 
                 num++;
            }
      
            maxSum=max(sum,maxSum);
        }

        return maxSum;
    }
};
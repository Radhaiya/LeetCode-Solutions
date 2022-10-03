class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int occur=0;
        int n=arr.size();
        int prod=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            occur=((i+1)*(n-i)+1)/2;
            prod=occur*arr[i];
            sum=sum+prod;
        }

        return sum;
    }
};

// Reduce Memory;
    
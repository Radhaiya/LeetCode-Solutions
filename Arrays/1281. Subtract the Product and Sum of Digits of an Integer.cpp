class Solution {
public:
    int subtractProductAndSum(int n) {
         int sum=0;
         int mul=1;
      while(n){
            int k;
            k=n%10;
            sum=sum+k;
            mul=k*mul;
            n=n/10;
       }

      return mul-sum;
    }
};
class Solution {
public:
    int countDigits(int num) {
        int x = num;
        int ans = 0;
        while(x){
            int y = x%10;
            x = x/10;

            if(num%y==0){
                ans=ans+1;
            }

        }

        return ans;
    }
};
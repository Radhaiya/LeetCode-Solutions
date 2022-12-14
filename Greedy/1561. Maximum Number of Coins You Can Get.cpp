class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans = 0;
        int j = piles.size()-1;
        int i=0;
       while(i+1<j){
          ans = ans+piles[j-1];
          j=j-2;
          i++;
      }

        return ans;
    }
};
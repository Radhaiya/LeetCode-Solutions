class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int temp=n/2;
        for(int i=0;i<n;i++){
              ans.push_back(temp);
              temp--;
        }
        if(n%2==0){
            ans.erase(ans.begin()+(n/2));
            ans.push_back(temp);
        }

        return  ans;
    }
};
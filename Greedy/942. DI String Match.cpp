class Solution {
public:
    vector<int> diStringMatch(string s) {
        int high=s.length();
        int low = 0;
        vector<int> ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='I'){
            ans.push_back(low);
            low++;
            }

            if(s[i]=='D'){
                ans.push_back(high);
                high--;
            }
        }

        ans.push_back(high);
        return ans;

    }
};
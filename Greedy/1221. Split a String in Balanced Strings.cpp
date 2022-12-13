class Solution {
public:
    int balancedStringSplit(string s) {
        
        int count=0;
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
              
                j++;
            }
            if(s[i]=='R'){
               
                j--;
            }

            if(j==0){
              
                count++;
            }

        }
        return count;    }
};
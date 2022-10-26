class Solution {
public:
    string truncateSentence(string s, int k) {
        string m="";
        int count =0;
        for( auto x:s){
           if( x==' '){
                count++;
                if(count==k){
                    break;
                }
            }
            m=m+x;
        }
        return m;
    }
};
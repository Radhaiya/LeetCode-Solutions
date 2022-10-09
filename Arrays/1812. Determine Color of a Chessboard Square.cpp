class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int num = (coordinates[0]-'a')+(coordinates[1]-'0');
        cout<<num;
        if(num%2==0) return true;
           else return false
    }
    
};
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string>s;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.size();j++){
                if(board[i][j]!='.')
                {
                    string x="row"+to_string(i)+board[i][j];
                    string y="col"+to_string(j)+board[i][j];
                    string z="club"+to_string(i/3)+to_string(j/3)+board[i][j];
                   
                    if(s.find(x)!=s.end() || s.find(y)!=s.end() || s.find(z)!=s.end())
                        return false;
                    else{
                        s.insert(x);
                        s.insert(y);
                        s.insert(z);
                     }
                }
            }
        }
        return true;
    }
};
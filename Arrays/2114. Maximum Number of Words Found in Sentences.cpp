class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count;
        int maxi=INT_MIN;
        
        for(int i=0;i<sentences.size();i++){
            count =1;
          for(int j=0;j<sentences[i].size();j++){
              if(sentences[i][j]==' ') count++;
          }  
            maxi=max(count,maxi);
        }
        
        return maxi;
    }
};
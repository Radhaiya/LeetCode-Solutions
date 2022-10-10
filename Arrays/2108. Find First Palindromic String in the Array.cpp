class Solution {
public:

  bool checkPalindrome(string word){
      
          string ans="";
          int first=0;
          int last = word.size()-1;
        //   cout<<last;
          while(first<last){
              if(word[first]==word[last]){
                  cout<<word[first]<<word[last]<<endl;
                  first++;
                  last--;
                  continue;
                  
              }
              else{
                  
                  return false;
              }
              
         }
         return true;
    }


    string firstPalindrome(vector<string>& words) {

        for (int i=0;i<words.size();i++){
            if(checkPalindrome(words[i])){
             return words[i];
            }
        }
         return "";
    }
};
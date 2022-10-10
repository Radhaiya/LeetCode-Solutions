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


//Optimization 
class Solution {
public:

  bool checkPalindrome(string word){
          string temp=word;
          reverse(temp.begin(),temp.end());
          if(temp==word) return true;
          else return false;
         
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


// More optimization Palindrom in half loop

class Solution {
public:
int i;
bool checkpalindrome(string &str){
        for(i = 0; i < str.length()/2; i++){
        if(str[i] != str[str.length()-1-i])return false;
        }return true;
}

            string firstPalindrome(vector<string>& words) {
            for(int i=0;i<words.size();i++){
                if(checkpalindrome(words[i]))return words[i];
             }
                return "";
}
};  
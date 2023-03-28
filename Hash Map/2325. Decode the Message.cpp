class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        string newkey="";
        string ans = "";

        for(int i=0;i<key.size();i++){
               if(key[i]!=' ' && newkey.find(key[i])==string::npos){
                newkey=newkey+key[i];
            }
        }
        for(int i=0;i<newkey.size();i++){      
          pair<char,char>p = make_pair(newkey[i],alphabet[i]);
            mp.insert(p);
                   
        }

        for(int i=0;i<message.size();i++){
            if(message[i]==' '){
                ans=ans+' ';
            }
            else{
                  ans = ans + mp[message[i]];
            }
          
        }
        

        return ans;

    }
};
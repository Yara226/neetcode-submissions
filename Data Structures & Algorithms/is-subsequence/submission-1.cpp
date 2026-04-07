class Solution {
public:
    bool isSubsequence(string s, string t) {
      string checker="";
        int j=0;
          for(int i=0;i<s.size();i++){
              
                if(s[i]==t[j]){
                  checker[i]=s[i];
                  j++;
                }
                else{
                     while(s[i]!=t[j]){
                        if(j==t.size() ){
                           return false;
                        }
                        j++;
                     }
                     checker[i]=s[i];
                  j++; 
                }
          }
          
       
            return   true;
          
    }
};
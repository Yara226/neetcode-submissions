class Solution {
public:
    bool isPalindrome(string s) {
       string ne="";
       for(int  i=0;i<s.size();i++){
        if(s[i]>=65 &&s[i]<=90){
            
              ne+= tolower(s[i]);  
        }  
        else if(s[i]>=97&&s[i]<=122)
         ne+=s[i];
         else if(s[i]>=48&&s[i]<=57)ne+=s[i];
       }  

       string copy=ne;
       reverse(copy.begin(),copy.end());
       if(copy==ne) return true;

       else {return false;}
    }
};

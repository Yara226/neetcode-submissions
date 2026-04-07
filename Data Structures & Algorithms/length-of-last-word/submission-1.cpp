class Solution {
public:
    int lengthOfLastWord(string s) {
         reverse(s.begin(),s.end());
             bool flag =false;
         int size=0;
         for(int i=0;i<s.size();i++){
            if(s[i]==' ' &&size>0 ){
                 return size;
            }
            else if(s[i]!=' ' ){
                size+=1;
            }
         }
         return size;
    }
};
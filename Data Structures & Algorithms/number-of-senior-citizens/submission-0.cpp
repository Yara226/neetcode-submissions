class Solution {
public:
    int countSeniors(vector<string>& details) {
             int numofAge =0;
           int  firstnum,secnum;
             for(int i=0;i<details.size();i++){
                      string s=details[i];
                      firstnum=int(s[11]-'0')*10;
                      secnum=int(s[12]-'0');
                           int total=firstnum+secnum;
                           if(total>60){
                            numofAge+=1;
                           }
             }
             return numofAge;
    }
};
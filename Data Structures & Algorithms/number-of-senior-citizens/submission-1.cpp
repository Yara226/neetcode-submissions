class Solution {
public:
    int countSeniors(vector<string>& details) {
             int numofAge =0;
           int  firstnum,secnum;
             for(int i=0;i<details.size();i++){
                      string s=details[i];
                          int age=stoi(s.substr(11,2));
                           if(age>60){
                            numofAge+=1;
                           }
             }
             return numofAge;
    }
};
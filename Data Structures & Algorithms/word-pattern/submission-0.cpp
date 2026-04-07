class Solution {
public:
    bool wordPattern(string pattern, string s) {
         map<char,string>values;
     vector<string>v;
        
            string che="";
           for(int i=0;i<s.size();i++){
                while(i<s.size()&&s[i]!=' '){
                    che+=s[i];
                    i++;
                }
                v.push_back(che);
                che="";
           }
           
      if(v.size() != pattern.size()) return false;
              map<string,char>mp;
       
        for(int i=0;i<v.size();i++){
          if(values.count(pattern[i])==0){
          values[pattern[i]] = v[i];
          
          }
          else{
            if(values[pattern[i]] != v[i]){
                return false;
            }

          }
        }
        for(int i=0;i<v.size();i++){
          if(mp.count(v[i])==0){
           mp[v[i]] = pattern[i];
        
          }
          else{
            if(mp[v[i]] != pattern[i]){
                return false;
            }
           
          }
        }
        return true;
     

         
       

    }
};
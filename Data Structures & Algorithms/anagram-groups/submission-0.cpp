class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
         for(int i=0;i<strs.size();i++){
            vector<string>row;
          if(strs[i]!="1"){
            row.push_back(strs[i]);
          }
           string  strelem=strs[i];
            sort(strelem.begin(),strelem.end());
            for(int j=i+1;j<strs.size();j++){
                string checkElem=strs[j];
                sort(checkElem.begin(),checkElem.end());
                if(strelem==checkElem && strs[j]!="1"){
                   row.push_back(strs[j]);
                   strs[j]="1";
                }
            
            }
            if(row.size()!=0){
                v.push_back(row);
            }
            row.clear();
            
         } 
          return v;
  
    }
   
};

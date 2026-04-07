class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
    sort(words.begin(),words.end(),[](string a,string b){
        return a.size()<b.size();
    });
        vector<string>v;
       
        for(int i=0;i<words.size();i++){ bool flag=true;
       for(int j=i+1;j<words.size();j++){
             auto it=words[j].find(words[i]);
             if(it!=string::npos  &&flag ){
                v.push_back(words[i]);
              flag=false;
                
             }
       }
        }
        return v;
    }
};
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
            stack<int>st;
           
            for(int i=0;i<tokens.size();i++){
                 if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||
                 tokens[i]=="/"){
                    int rightval=st.top();
                    st.pop();
                    int leftval=st.top();
                     st.pop();
                     if(tokens[i]=="+") {
                        st.push(rightval+leftval);

                     }
                     else if(tokens[i]=="-"){st.push(leftval-rightval);}
                     else if(tokens[i]=="/"){st.push(leftval/rightval);}
                      else if(tokens[i]=="*"){st.push(leftval*rightval);}
                 }
                else {
                    st.push(stoi(tokens[i]));
                }
            }
            return st.top();
    }
};

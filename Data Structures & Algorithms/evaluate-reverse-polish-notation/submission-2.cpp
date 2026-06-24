class Solution {
public:
    int evalRPN(vector<string>& tokens) {
            stack<int>st;
           
            for(int i=0;i<tokens.size();i++){
                if(tokens[i]=="+") {
                    int valplus=st.top();
                    st.pop();
                    valplus+=st.top();
                    st.pop();
                    st.push(valplus);

                }
                else if (tokens[i]=="-"){
                      int minusright=st.top();
                      st.pop();
                      int minusleft=st.top();
                         st.pop();
                   
                    st.push( minusleft-minusright);
                }
                else if(tokens[i]=="*"){
                    int valmult=st.top();
                      st.pop();
                      valmult*=st.top();
                      st.pop();
                    st.push(valmult);
                }
                else if(tokens[i]=="/"){
                    int rightdiv=st.top();
                     st.pop();
                     int leftdiv=st.top();
                     st.pop();
                   
                    st.push( leftdiv/rightdiv);

                }
                else {
                    st.push(stoi(tokens[i]));
                }
            }
            return st.top();
    }
};

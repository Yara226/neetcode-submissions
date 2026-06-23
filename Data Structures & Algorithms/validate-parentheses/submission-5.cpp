class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        if(s.size()==1) return false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '[' || s[i] == '(' || s[i] == '{') {
                st.push(s[i]);
            } else if (s[i] == '}') {
                 if(st.size()==0) return false;
                if (st.top ()== '{')
                    st.pop();
                else {
                    return false;
                }
            }

            else if (s[i] == ')') {
                 if(st.size()==0) return false;
                if (st.top() == '(')
                    st.pop();
                else {
                    return false;
                }
            }
             else if (s[i] == ']') {
                if(st.size()==0) return false;
                if (st.top() == '[')
                    st.pop();
                else {
                    return false;
                }
            }
        }
        if(st.size()!=0) return false;
          else {return true;}
    }
};

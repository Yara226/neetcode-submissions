class MinStack {
public:
stack<int>st;
stack<int>minst;
    MinStack() {
        
    }
    
    void push(int val) {
          st.push(val);
          if(minst.size()==0){
            minst.push(val);
          }
          else{
             int topvalue=minst.top();
            if(minst.top()>val) minst.push(val);
            else {
                 minst.push(topvalue) ;}
          }

    }
    
    void pop() {
            if(st.size()==0) cout<<-1;
            else{
                st.pop();
                minst.pop();
            }
    }
    
    int top() {
         return st.top(); 
    }
    
    int getMin() {
       return   minst.top();
    }
};

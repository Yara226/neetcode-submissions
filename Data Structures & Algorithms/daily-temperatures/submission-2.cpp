class Solution {
   public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> v(temperatures.size());
        for (int i = 0; i < temperatures.size(); i++) {
            if(i==temperatures.size()-1) {
                v[i]=0;
               
            }
            else{
            st = stack<int>();
            int val = temperatures[i];
            int j = i + 1;
            while (j < temperatures.size() && val >= temperatures[j]) {
                st.push(temperatures[j]);
                j++;
            }

            if (j >= temperatures.size() && temperatures[temperatures.size() - 1] <= val) {
                v[i] = 0;
            } else if (j  < temperatures.size() && temperatures[j ] > val) {
                
                    v[i] = st.size() + 1;
                
            }

            else {
                v[i] = st.size() + 1;
            }}
        }

        return v;
    }
};

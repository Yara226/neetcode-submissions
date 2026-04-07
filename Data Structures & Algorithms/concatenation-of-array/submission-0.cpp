class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(2*nums.size());
       int t=2;
       int index=0;
       while(t>0){
        for(int i=0;i<nums.size();i++){
            ans[index]=nums[i];
            index++;
        }
        t--;
       }
        return  ans;
    }
   
};
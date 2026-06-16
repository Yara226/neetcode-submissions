class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int >v(nums.size());
        for(int i=0;i<nums.size();i++){
         int curSum=1;
         for(int j=0;j<nums.size();j++){
            if(i==j) curSum*=1;
            else  curSum*=nums[j];  
         }
        
         v[i]=curSum;
        }
        return v;
      
         
    }
};

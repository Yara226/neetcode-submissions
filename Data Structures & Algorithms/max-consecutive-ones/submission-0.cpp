class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0;
        int cur=0;
     
            for(int i=0;i<nums.size();i++){
                   if(nums[i]==1){
                   cur++;
                   }
                   else{
                  mx=max(cur,mx);
                  cur=0;
                   }
            }
            mx=max(cur,mx);
            return mx;
    }
};
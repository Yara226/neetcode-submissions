class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           map<int,int>mp;
           for(int i=0;i<nums.size();i++){
            auto comp=mp.find(target-nums[i]);
            if(comp!=mp.end()){
                     return {comp->second,i};
            }
            else{  mp[nums[i]]=i;}
          
         }
         
          
    
}
};

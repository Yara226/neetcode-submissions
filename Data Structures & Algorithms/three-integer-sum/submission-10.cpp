class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> v;
       vector<int>vn;
       bool flag=false;
      
        sort(nums.begin(),nums.end());

      for(int i=0;i<nums.size();i++){
        if(i>0 &&nums[i]==nums[i-1]){
            continue;
        }
        int l=i+1,r=nums.size()-1;
        while(l<r){
            if(nums[i]+nums[l]+nums[r]==0){
                v.push_back({nums[i],nums[l],nums[r]});
                l++;
                r--;
                   while(l < r && nums[l] == nums[l-1]) l++;
                while(l < r && nums[r] == nums[r+1]) r--;

            }
            else if(nums[i]+nums[l]+nums[r]>0) r-=1;
            else{l+=1;}
        }
      }
      return v;
    }
};

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
           map<int,int>mp;
           int len=nums.size()-1;
             int mi=1000000000,ma=-1000000000;
           for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            mi=min(nums[i],mi);
            ma=max(nums[i],ma);
           }
           int sum=0;
           int cur=0;
           if(nums.size()==0){
            return 0;
           }
           else if(nums.size()==1) return 1;
           for(int i=mi;i<=ma;i++){ 
            if(mp[i]>0 &&cur ==0){ cur+=1;
            sum=max(sum,cur);
            }
            else    if(mp[i]>0 &&mp[i-1]>0) {cur+=1;
              sum=max(sum,cur);
              } 
              else{
                 sum=max(sum,cur);
                cur=0;
              }  
           }
     
           return sum;
    }
};

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sizeOfArray=nums.size();
        vector<int>v;
    for(int i=0;i<nums.size();i++){
      if(nums[i]==val){
       
         sizeOfArray-=1;
      }else{
        v.push_back(nums[i]);
      }
    }
    nums.resize(v.size());
    for(int i=0;i<v.size();i++){
        nums[i]=v[i];
    }
   
    return  sizeOfArray;
    }
};
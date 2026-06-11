class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int  num=0,count=0;
        for(auto i :nums){
            if(count==0){
                num=i;
            }
            if(num==i){
                count++;
            }
            else{count--;}
        }
         return num;
    }
   
};
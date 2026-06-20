class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
           int l=0,r=numbers.size()-1;
           vector<int>v(2);
           bool flag=false;
          while(l<numbers.size()-1&&l<r){
            if(numbers[l]+numbers[r]>target){
                r-=1;
            }
            else if(numbers[l]+numbers[r]<target){
                l+=1;
            }
            else{
               v[0]=l+1;
               v[1]=r+1;
               return v;
            }
          }
            
                v[0]=-1;
                v[1]=-1;
            
          return v;
    }
};

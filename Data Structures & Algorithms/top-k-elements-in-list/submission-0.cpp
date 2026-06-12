class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       sort(nums.begin(), nums.end());

vector<pair<int,int>> v; // {frequency, number}

int count = 1;

for(int i = 1; i < nums.size(); i++) {
    if(nums[i] == nums[i-1]) {
        count++;
    } else {
        v.push_back({count, nums[i-1]});
        count = 1;
    }
}


v.push_back({count, nums.back()});
    sort(v.begin(), v.end(), greater<pair<int,int>>());
    vector<int>vec;
    for(int i=0;i<k;i++){
      vec.push_back(v[i].second);
    }
    return vec;
    }
};

class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
             vector<pair<int,double>> v;

            for(int i=0;i<speed.size();i++){
                double val =(double)(target - position[i]) / speed[i];
                v.push_back({position[i], val});
            }
            sort(v.rbegin(), v.rend());
             int fleets = 0;
        double cur = 0;

        for(auto &car : v){
            if(car.second > cur){
                fleets++;
                cur = car.second;
            }
        }

        return fleets;
           
    }
};

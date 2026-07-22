class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        int total = 0;
        if (cost.size() == 1) {
            return cost[0];
        }
        for (int i = 0; i < cost.size(); i = i + 3) {
            total += cost[i];

            if (i + 1 < cost.size()) {

                total += +cost[i + 1];
            }
        }
        return total;
    }
};
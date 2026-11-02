class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        //Two cases, we can either keep or throw the stair we are on

        //minC(n) = min(minC(n - 1), minC(n - 2))

        int goal = cost.size();

        vector<int> minC;

        for (int i = 0; i < goal; ++i)
        {
            //Base case
            if (i == 1 || i == 0)
                minC.push_back(cost[i]);
            else
            {
                //We just always add cost[i] if current i turns out to be not optimal, it means next iteration, we skip it when we do the minC
                int min_cost = min(minC[i - 1], minC[i - 2]) + cost[i];
                minC.push_back(min_cost);
            }
        }
        int minlen = minC.size();
        return min(minC[minlen - 1], minC[minlen - 2]);
    }
};

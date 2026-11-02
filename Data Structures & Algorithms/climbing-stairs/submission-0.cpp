class Solution {
public:
    int climbStairs(int n) {
        //Two ways to get to 2, one way to get to one. 
        //Take step 3, its ways we can get to 1 + ways we can get to 2 plus 2 because we either jump 1 from 2 or jump 2 from 1

        //T(n) = T(n - 1) + T(n - 2) + 2

        vector<int> steps;

        for (int i = 0; i <= n; ++i)
        {
            //Base cases
            if (i == 0 || i == 1)
            {
                steps.push_back(1);
            }
            else if (i == 2)
            {
                steps.push_back(2);
            }
            else
            {
                int ways = steps[i - 1] + steps[i - 2];
                steps.push_back(ways);
            }
        }
        return steps.back();
    }
};

class Solution {
public:
    int rob(vector<int>& nums) {
        //Two options, rob the house or don't. If you rob this house, you couldnt have robbed the previous one

        //money(n) = max(money(n - 1), money(n - 2) + nums[n]);

        int prev1 = 0;
        int prev2 = 0;
        int curr = 0;

        int maxM = 0;

        for (int i = 0; i < nums.size(); ++i)
        {
            curr = nums[i];
            maxM = max(prev1, prev2 + curr);
            prev2 = prev1;
            prev1 = maxM;
        }
        return maxM;
    }
};

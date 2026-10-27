class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;

        int preprod = 1;
        int postprod = 1;

        for (int i = 0; i < nums.size(); ++i)
        {
            preprod = 1;
            for (int j = 0; j < i; ++j)
            {
                preprod *= nums[j];
            }

            postprod = 1;
            for (int k = nums.size() - 1; k > i; --k)
            {
                postprod *= nums[k];
            }

            result.push_back(preprod * postprod);
        }

        return result;
    }
};

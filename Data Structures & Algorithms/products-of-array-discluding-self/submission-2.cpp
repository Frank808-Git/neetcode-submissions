class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;

        int preprod = 1;
        int postprod = 1;

        vector<int> pre;
        vector<int> post;

        for (int i = 0; i < nums.size(); ++i)
        {
            preprod = 1;
            for (int j = 0; j < i; ++j)
            {
                preprod *= nums[j];
            }
            pre.push_back(preprod);

            postprod = 1;
            for (int k = nums.size() - 1; k > i; --k)
            {
                postprod *= nums[k];
            }
            post.push_back(postprod);

            result.push_back(pre[i] * post[i]);
        }

        return result;
    }
};

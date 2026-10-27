class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> count;

        vector<int> result;

        for (int num : nums)
        {
            count[num] += 1;
        }

        vector<vector<int>> freq(nums.size());

        for (auto p : count)
        {
            freq[p.second - 1].push_back(p.first);
        }

        for (int i = freq.size() - 1; i >= 0; --i)
        {
            for (int j = 0; j < freq[i].size(); ++j)
            {
                result.push_back(freq[i][j]);

                if (result.size() == k)
                    return result;
            }   
        }

        return result;
    }
};

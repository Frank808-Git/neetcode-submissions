class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> vals(begin(nums), end(nums));
        int longest = 0;
        int length;
        map<int, int> sequences;

        for (int num : vals)
        {
            if (!sequences[num])
            {
                length = sequences[num - 1] + sequences[num + 1] + 1;
                sequences[num] = length;

                sequences[num - sequences[num - 1]] = length;
                sequences[num + sequences[num + 1]] = length;
                longest = max(longest, length);
            }
        }
        return longest;
    }
};

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        map<int, bool> exist;

        for (int num : nums)
        {
            if (exist[num])
                return true;
            else
                exist[num] = true;
        }
        return false;
    }
};
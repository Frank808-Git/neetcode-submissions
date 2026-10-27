class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> comp;

        vector<int> result;

        for (int i = 0; i < nums.size(); ++i)
        {
            //Get the compliment which is target - current #, put that in the dictionary (4, 0)
            //If when we get to 4, 4 exists in the dictionary, that means it has a compliment
            int diff = target - nums[i];

            if (comp.contains(diff))
            {
                result.push_back(comp[diff]);
                result.push_back(i);
            }

            comp[nums[i]] = i;
        }
        return result;
    }
};

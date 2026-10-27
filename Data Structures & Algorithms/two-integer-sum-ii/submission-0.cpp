class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> comp;

        vector<int> result;

        for (int i = 0; i < numbers.size(); ++i)
        {
          int diff = target - numbers[i];

          if (comp.contains(numbers[i]))
          {
              result.push_back(comp[numbers[i]]);
              result.push_back(i + 1);
              return result;
          }
          comp[diff] = i + 1;
        }
        return result;
    }
};

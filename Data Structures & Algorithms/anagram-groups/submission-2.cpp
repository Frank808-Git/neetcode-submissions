class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        //Sets don't work because words can have double letters
        //Add the ASCII values of the strings, all anagrams will have the same ascii value
        //For each word, iterate through and add together ascii values and set val
        //For each following word, first compare length, iff length is the same then compare ascii by iterating through word

        int val;
        map<vector<int>, vector<string>> anagrams;

        vector<vector<string>> result;
        
        int i = 0;

        

        for (auto word : strs)
        {
            vector<int> count(26);
            for (int i = 0; i < word.length(); ++i)
            {
                count[word[i] - 97] += 1;
            }

            anagrams[count].push_back(word);
        }

        for (auto p : anagrams)
        {
            result.push_back(p.second);
        }
        return result;
    }
};

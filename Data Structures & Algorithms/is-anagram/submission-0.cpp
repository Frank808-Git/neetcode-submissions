class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length())
            return false;

        map<char, int> word1;

        map<char, int> word2;

        for(int i = 0; i < s.length(); ++i)
        {
            ++word1[s[i]];
            ++word2[t[i]];
        }
        
        return word1 == word2;
    }
};

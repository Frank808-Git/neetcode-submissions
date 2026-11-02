class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        text1.insert(text1.begin(), 'F'); 
        text2.insert(text2.begin(), 'F'); 

        int len1 = text1.length();
        int len2 = text2.length();

        int sublen = 0;

        int subs[len1][len2];

        for (int i = 0; i < len1; ++i)
        {
            for (int j = 0; j < len2; ++j)
            {
                if (i == 0 || j == 0)
                {
                    subs[i][j] = 0;
                }
                else if (text1[i] == text2[j])
                {
                    subs[i][j] = 1 + subs[i-1][j-1];
                    sublen = max(sublen, subs[i][j]);
                }
                else
                {
                    subs[i][j] = max(subs[i][j-1], subs[i-1][j]);
                }
            }
        }
        return sublen;
    }
};

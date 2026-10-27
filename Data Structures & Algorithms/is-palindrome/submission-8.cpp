class Solution {
public:
    bool isPalindrome(string s) {
      int start = 0;
      int end = s.length() - 1;

      string str = s;

      for (auto& ch : str)
      {
        ch = tolower(ch);
      }

      while (start < end)
      {
        for (; !isalnum(str[start]) && start <= s.length(); ++start)
          continue;
        for (; !isalnum(str[end]) && end >= 0; --end)
          continue;

        if (str[start] != str[end])
          return false;

        ++start;
        --end;
      }

      return true;
    }
};

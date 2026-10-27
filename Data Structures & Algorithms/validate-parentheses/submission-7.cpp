class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        char curr;
        for (char bracket : s)
        {   
            if (brackets.empty())
            {
                brackets.push(bracket);
                continue;
            }

            switch (bracket)
            {
                case ')':
                    curr = brackets.top();
                    brackets.pop();
                    if (curr != '(')
                        return false;
                    break;
                    
                case '}':
                    curr = brackets.top();
                    brackets.pop();
                    if (curr != '{')
                        return false;
                    break;
                case ']':
                    curr = brackets.top();
                    brackets.pop();
                    if (curr != '[')
                        return false;
                    break;

                default:
                    brackets.push(bracket);
            }
        }
        return brackets.empty();
    }
};

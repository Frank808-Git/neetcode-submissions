class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> ops;
    
        for (auto token : tokens)
        {
            if (token == "+")
            {
                int sum = ops.top();
                ops.pop();
                sum += ops.top();
                ops.pop();
                ops.push(sum);
            }
            else if (token == "-")
            {
                int diff = ops.top();
                ops.pop();
                diff = ops.top() - diff;
                ops.pop();
                ops.push(diff);
            }
            else if (token == "*")
            {
                int prod = ops.top();
                ops.pop();
                prod *= ops.top();
                ops.pop();
                ops.push(prod);
            }
            else if (token == "/")
            {
                int quo = ops.top();
                ops.pop();
                quo = ops.top() / quo;
                ops.pop();
                ops.push(quo);
            }
            else
            {
                ops.push(stoi(token));
            }
        }
        return ops.top();
    }
};

class MinStack {
public:
    vector<int> buf;
    MinStack() {
        
    }
    
    void push(int val) {
        buf.push_back(val);
    }
    
    void pop() {
        buf.pop_back();
    }
    
    int top() {
        return buf.back();
    }
    
    int getMin() {
        int min = numeric_limits<int>::max();

        for (int i = 0; i < buf.size(); ++i)
        {
            if (buf[i] < min)
                min = buf[i];
        }
        return min;
    }
};

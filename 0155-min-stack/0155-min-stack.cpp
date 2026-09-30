class MinStack {
public:
    stack<int> s;
    stack<int> minS;
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);

        if (minS.empty() || value <= minS.top()){
            minS.push(value);
        }
    }
    
    void pop() {
        if (s.empty()){
            return;
        }

        if (s.top() == minS.top()){
            minS.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minS.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
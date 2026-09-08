class MinStack {
public:
    stack<int> st;
    stack<int> mini;
    MinStack() {}

    void push(int value) {
        st.push(value);
        if (mini.empty()) {
            mini.push(value);
        } else {
            if (value <= mini.top()) {
                mini.push(value);
            }
        }
    }
        void pop() {
            if (st.top() == mini.top()) {
                mini.pop();
            }
            st.pop();
        }

        int top() { return st.top(); }

        int getMin() { return mini.top(); }
    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
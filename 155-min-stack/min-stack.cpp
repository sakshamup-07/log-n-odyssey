class MinStack {
public:
    stack<long long> st;
    long long mini;

    MinStack() {}

    void push(int value) {
        if(st.empty()) {
            st.push(value);
            mini = value;
        }
        else if(value >= mini) {
            st.push(value);
        }
        else {
            st.push(2LL * value - mini);
            mini = value;
        }
    }

    void pop() {
        if(st.empty()) return;

        if(st.top() < mini) {
            mini = 2LL * mini - st.top();
        }

        st.pop();
    }

    int top() {
        if(st.empty()) return -1;

        if(st.top() < mini)
            return mini;

        return st.top();
    }

    int getMin() {
        return mini;
    }
};
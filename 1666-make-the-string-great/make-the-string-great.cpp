class Solution {
public:
    string makeGood(string s) {
        stack<char> st;

        for(int i = 0; i < s.size(); i++) {
            if(!st.empty() && abs(st.top() - s[i]) == 32) {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }

        string j;

        while(!st.empty()) {
            j.push_back(st.top());
            st.pop();
        }

        reverse(j.begin(), j.end());

        return j;
    }
};
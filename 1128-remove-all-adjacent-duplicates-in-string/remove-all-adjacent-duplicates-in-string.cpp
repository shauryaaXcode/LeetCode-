class Solution {
public:
    string removeDuplicates(string s) {
        stack<int> st;
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (st.empty() || st.top() != ch) {
                st.push(ch);
            } else {
                st.pop();
            }
        }
        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
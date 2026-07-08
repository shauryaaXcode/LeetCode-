class Solution {
public:
    int minSwaps(string s) {
        stack<int> st;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '[') {
                st.push(ch);
            } else if (!st.empty()) {
                st.pop();
            }
        }
        return (st.size() + 1) / 2;
    }
};
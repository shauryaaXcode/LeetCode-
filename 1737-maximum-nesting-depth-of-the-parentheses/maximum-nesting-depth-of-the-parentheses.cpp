class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int count = 0;
        int maxi = 0;
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            if (ch == '(') {
                st.push(ch);
                count++;
                maxi = max(count, maxi);
            } else if (ch == ')') {
                st.pop();
                count--;
            }
        }
        return maxi;
    }
};
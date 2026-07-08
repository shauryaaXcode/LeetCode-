class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string answer;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == '(') {
                // Agar stack empty nahi hai to ye outermost '(' nahi hai
                if (!st.empty()) {
                    answer.push_back(ch);
                }
                st.push(ch);
            } else { // ch == ')'
                st.pop();
                if (!st.empty()) {
                    answer.push_back(ch);
                }
            }
        }
        return answer;
    }
};
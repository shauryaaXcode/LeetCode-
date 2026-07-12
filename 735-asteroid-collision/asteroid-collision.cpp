class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        for (int i = 0; i < n; i++) {
            int arr = asteroids[i];
            while (!st.empty() && arr < 0 && st.top() > 0) {
                int sum = arr + st.top();
                if (sum < 0) {
                    st.pop();
                } else if (sum > 0) {
                    arr = 0; // arr zero se while break ho jayega aur arr khud
                             // pop ho jayega upcoming element
                } else {
                    st.pop();
                    arr = 0; // sum==0 condition
                }
            }
            if (arr != 0) {
                st.push(arr);
            }
        }
        int s = st.size();
        vector<int> ans(s);
        int i = s - 1;
        while (!st.empty()) {
            ans[i] = st.top();
            st.pop();
            i--;
        }
        return ans;
    }
};
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        unordered_set<int> st;
        for (auto& it : mp) {
            int freq = it.second;
            if (st.find(freq) != st.end()) {
                return false;
            }
            st.insert(freq);
        }
        return true;
    }
};
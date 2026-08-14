class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int s = 0;
        int e = n - 1;
        int pos = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (letters[mid] > target) {
                pos = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        if (pos == -1)
            return letters[0];
        else
            return letters[pos];
    }
};
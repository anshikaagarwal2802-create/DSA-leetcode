class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());

        string longest = "";
        int n = strs.size();
        if (strs.empty())
            return "";
        string first = strs[0];
        string last = strs.back();
        int min_length = min(first.length(), last.length());
        for (int i = 0; i < min_length; i++) {
            if (strs[0][i] == strs[n - 1][i]) {
                longest += strs[0][i];

            } else {
                break;
            }
        }
        return longest;
    }
};

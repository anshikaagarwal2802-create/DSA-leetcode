class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for (int i = 1; i <= numRows; i++) {
            long long res = 1;
            vector<int> ansrow;

            ansrow.push_back(res);
            for (int col = 1; col < i; col++) {
                res = res * (i - col);
                res = res / col;
                ansrow.push_back(res);
            }
            ans.push_back(ansrow);
        }
        return ans;
    }
};

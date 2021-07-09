class Solution {
public:
    int calculateMinimumHP(vector<vector<int>> &dungeon) {
        int n = dungeon.size(), m = dungeon.at(0).size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, INT_MAX));
        
        //初始生命值歸1
        dp[n][m - 1] = 1;
        dp[n - 1][m] = 1;

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int tmp = min(dp[i + 1][j], dp[i][j + 1]) - dungeon[i][j];
                dp[i][j] = tmp > 0 ? tmp : 1;
            }
        }

        return dp[0][0];
    }
};
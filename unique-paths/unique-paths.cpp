class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m);
        for(int i=0;i<m;i++) dp.at(i).resize(n);
        dp[0][0]=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j>0) dp[j][i]+=dp[j-1][i];
                if(i>0) dp[j][i]+=dp[j][i-1];
            }
        }
        return dp[m-1][n-1];
    }
};
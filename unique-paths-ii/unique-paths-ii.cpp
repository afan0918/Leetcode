class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size());
        for(int i=0;i<obstacleGrid.size();i++) dp.at(i).resize(obstacleGrid.at(i).size());
        dp.at(0).at(0)=1;
        for(int i=0;i<obstacleGrid.size();i++){
            for(int j=0;j<obstacleGrid.at(i).size();j++){
				if(i>0&&!obstacleGrid.at(i-1).at(j)) dp.at(i).at(j)+=dp.at(i-1).at(j);
                if(j>0&&!obstacleGrid.at(i).at(j-1)) dp.at(i).at(j)+=dp.at(i).at(j-1);
            }
        }
        if(obstacleGrid.at(obstacleGrid.size()-1).at(obstacleGrid.at(0).size()-1)) return 0;
        return dp.at(obstacleGrid.size()-1).at(obstacleGrid.at(0).size()-1);
    }
};
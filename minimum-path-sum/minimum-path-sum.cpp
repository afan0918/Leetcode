class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.at(i).size();j++){
                if(!i&&!j) {}
                else if(!i) grid.at(i).at(j)+=grid.at(i).at(j-1);
                else if(!j) grid.at(i).at(j)+=grid.at(i-1).at(j);
                else grid.at(i).at(j)+=min(grid.at(i-1).at(j),grid.at(i).at(j-1));
            }
        }
        return grid.at(grid.size()-1).at(grid.at(0).size()-1);
    }
};
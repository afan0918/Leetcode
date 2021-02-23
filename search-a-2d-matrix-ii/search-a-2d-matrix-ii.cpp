class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
		int vertical=0,horizontal=matrix[0].size()-1;
		while(vertical<matrix.size()&&horizontal>=0){
			if(matrix[vertical][horizontal]>target) horizontal--;
			else if(matrix[vertical][horizontal]<target) vertical++;
			else return true;
		}
		return false;
    }
};
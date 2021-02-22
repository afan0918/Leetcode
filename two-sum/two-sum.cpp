class Solution {
public:
    //額，這個是我很愛用的巨集，寫迴圈時比較快，對我就懶
    #define _for(i,a,b) for(int i=a;i<b;i++)
    #define _rep(i,a,b) for(int i=a;i<=b;i++)
    
    vector<int> twoSum(vector<int>& nums, int target) {
        //單純暴力把所有的東西都跑過一遍，應該滿好理解的。
        _for(x,0,nums.size()-1){
            _for(y,x+1,nums.size()){
                if(nums[x] + nums[y] == target){
                    //找到就把東西丟出去了。
                    return std::vector<int>({x,y}); 
                }
            }
        }
        //找不到的情況
        return std::vector<int>({-1,-1});
    }
};
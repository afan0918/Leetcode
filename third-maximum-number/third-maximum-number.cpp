class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1,j=0;
		for(;i>0&&j<2;i--)
			if(nums[i]!=nums[i-1]) j++;
        if(j<2) return nums[nums.size()-1];
		return nums[i];
    }
};
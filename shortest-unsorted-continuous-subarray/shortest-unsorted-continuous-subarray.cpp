class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
		int left=0,right=nums.size()-1,max=INT_MIN;
		vector<int> sorted(nums);
        sort(sorted.begin(), sorted.end());
		while(left<nums.size()&&nums[left]==sorted[left]) left++;
		while(right>=0&&nums[right]==sorted[right]) right--;
		return right==-1?0:right-left+1;
    }
};
class Solution {
private:
	vector<int> nums;
	vector<int> find;
public:
    Solution(vector<int>& nums) {
        this->nums=nums;
    }
	
    int pick(int target) {
        for(int i=0;i<nums.size();i++)
			if(nums[i]==target) find.push_back(i);
		return find[rand()%find.size()];
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */
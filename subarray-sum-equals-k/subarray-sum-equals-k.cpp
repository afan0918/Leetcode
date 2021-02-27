class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
		int result=0,count=0;
		unordered_map<int,int> map;
		map[0]=1;
		for(int i=0;i<nums.size();i++){
            count+=nums[i];
            result+=map[count-k];
            map[count]++;
        }
		return result;
    }
};
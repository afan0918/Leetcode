class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
		
		int left,right,n=nums.size(),sum;
		vector<vector<int>> res;
		
		for(int i=0;i<n-3;i++){
			for(int j=i+1;j<n-2;j++){
				left=j+1,right=n-1;
				while(left<right){
					sum=nums[i]+nums[j]+nums[left]+nums[right];
					if(sum>target) right--;
					else if(sum<target) left++;
					else{
                        res.push_back({nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                    }
				}
			}
		}
		
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()), res.end()); 
		return res;
    }
};
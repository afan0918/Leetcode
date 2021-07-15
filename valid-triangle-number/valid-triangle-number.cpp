class Solution {
 public:
  int triangleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int res = 0, left = 0, right = nums.size() - 1;

    for (int i = right; i >= left; i--) {  //由右到左遍歷可能性
      int low = 0, high = i - 1;
      //滑動窗
      while (low < high) {
        if (nums[low] + nums[high] > nums[i]) {
          res += high - low;
          high--;
        } else
          low++;
      }
    }

    return res;
  }
};
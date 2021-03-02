/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
	vector<int> result;
	void dfs(TreeNode* root){
		if(!root) return;
		result.push_back(root->val);
		dfs(root->left);
		dfs(root->right);
	}
public:
    bool findTarget(TreeNode* root, int k) {
        dfs(root);
		sort(result.begin(),result.end());
		int left=0,right=result.size()-1;
		while(left<right){
			if(result[left]+result[right]<k) left++;
			else if(result[left]+result[right]>k) right--;
			else return true;
		}
		return false;
    }
};
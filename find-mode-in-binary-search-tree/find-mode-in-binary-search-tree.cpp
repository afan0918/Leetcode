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
	unordered_map<int,int> map;
	int maxnum=0;
	void dfs(TreeNode* root) {
		if(!root) return;
		maxnum=max(++map[root->val],maxnum);
		dfs(root->left);
		dfs(root->right);
	}
public:
    vector<int> findMode(TreeNode* root) {
		vector<int> result;
        dfs(root);
		unordered_map<int,int>::iterator iter;
		for(iter=map.begin();iter!=map.end();iter++)
			if(iter->second==maxnum) result.push_back(iter->first);
		return result;
    }
};
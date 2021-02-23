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
	int dfs(TreeNode* root) {
		int sum=0;
		if(root->left) sum+=dfs(root->left);
		if(root->right) sum+=dfs(root->right);
		sum+=root->val;
		maxnum=max(maxnum,++map[sum]);
		return sum;
	}
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
		if(!root) return {};
		vector<int> result;
        dfs(root);
		unordered_map<int,int>::iterator iter;
		for(iter=map.begin();iter!=map.end();iter++)
			if(iter->second==maxnum) result.push_back(iter->first);
		return result;
    }
};
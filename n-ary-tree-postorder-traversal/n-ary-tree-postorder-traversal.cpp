/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
private:
	vector<int> result;
	void dfs(Node* root){
		for(int i=0;i<root->children.size();i++)
			dfs(root->children[i]);
		result.push_back(root->val);
	}
public:
    vector<int> postorder(Node* root) {
        if(!root) return {};
		dfs(root);
		return result;
    }
};
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
	int result=0;
	void dfs(Node* root,int step) {
		if(!root) return;
		result=max(step,result);
		for(int i=0;i<root->children.size();i++)
			dfs(root->children[i],step+1);
	}
public:
    int maxDepth(Node* root) {
        dfs(root,1);
		return result;
    }
};
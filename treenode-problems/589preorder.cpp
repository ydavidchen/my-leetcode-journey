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
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }
    
    void dfs(Node* root, vector<int>& out) {
        if(root==nullptr) return;
        out.push_back(root->val);
        for(auto & child : root->children) {
            dfs(child, out);
        }
    }
    
};
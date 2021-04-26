/*
Given a n-ary tree, find its maximum depth.
The maximum depth is the number of nodes along the 
longest path from the root node down to the farthest leaf node.

Examples:
    Input: root = [1,null,3,2,4,null,5,6]
    Output: 3

    Input: root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
    Output: 5

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
    int maxDepth(Node* root) {
        // DFS approach
        if(root==nullptr) return 0;
        
        int depth=0;
        
        for(auto & child : root->children) {
            depth = max(maxDepth(child), depth);
        }
        
        return depth+1;
    }
};
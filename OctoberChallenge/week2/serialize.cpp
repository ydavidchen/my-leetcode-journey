/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream oss;
        sHelper(root, oss);
        return oss.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream iss(data);
        return dHelper(iss);
    }
    
    
    // Helpers:
    void sHelper(TreeNode* root, ostringstream& oss) {
        if(! root) {
            oss << "# ";
        } else {
            oss << root->val << " ";
            sHelper(root->left, oss);
            sHelper(root->right, oss);
        }
    }
    
    TreeNode* dHelper(istringstream& iss) {
        string val;
        iss >> val;
        
        if(val == "#") return nullptr;
        
        TreeNode* tn = new TreeNode(stoi(val));
        tn->left = dHelper(iss);
        tn->right = dHelper(iss);
        return tn;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;

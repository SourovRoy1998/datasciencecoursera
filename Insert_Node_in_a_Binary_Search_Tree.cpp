//https://www.lintcode.com/problem/insert-node-in-a-binary-search-tree/description


/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param root: The root of the binary search tree.
     * @param node: insert this node into the binary search tree
     * @return: The root of the new binary search tree.
     */
    TreeNode * insertNode(TreeNode * root, TreeNode * node) {
        // write your code here
        if(!root)
            return node;
        
        if(root->val>node->val){
            if(root->left==nullptr)
                root->left=node;
            else
                insertNode(root->left,node);
        }
        else{
            if(root->right==nullptr)
                root->right=node;
            else
                insertNode(root->right,node);
        }
        return root;
            
        
        
        
    }
};

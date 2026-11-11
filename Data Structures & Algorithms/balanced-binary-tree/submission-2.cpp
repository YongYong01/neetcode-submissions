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
    
public:

    int height(TreeNode* root){
        if(root == nullptr){
            return 0;
        }

        int DepthL = height(root->left);
        int DepthR = height(root->right);

        return 1 + max(DepthL, DepthR);

    }


    bool isBalanced(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        TreeNode* leftroot = root->left;
        TreeNode* rightroot = root->right;

        int left = height(leftroot);
        int right = height(rightroot);

        if(abs(left - right) > 1){
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
        
    }
};

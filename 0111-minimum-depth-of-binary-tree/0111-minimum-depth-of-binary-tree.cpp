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
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        int minLeft=minDepth(root->left);
        int minRight=minDepth(root->right);
        if(minLeft==0){
            return minRight +1;
        }
        else if(minRight==0){
            return minLeft+1;
        }
        else{
        return min(minLeft,minRight)+1;
        }
    }
};
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
    
    bool hasPathSum(TreeNode* root, int targetSum, int currSum = 0) {
        if (root == nullptr){
            return false;
        }
        if (root-> left == nullptr && root-> right == nullptr){
            if (root-> val + currSum == targetSum){
                return true;
            }
            return false;
        }
        int leftAns = hasPathSum(root-> left, targetSum, root-> val + currSum);
        int rightAns = hasPathSum(root-> right, targetSum, root-> val + currSum);

        return leftAns || rightAns;
    }
};
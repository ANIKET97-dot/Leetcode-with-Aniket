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
// int currSum = 0;
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
        bool left_ans = hasPathSum(root-> left, targetSum, currSum + root-> val);
        bool right_ans = hasPathSum(root-> right, targetSum, currSum + root-> val);

        return left_ans || right_ans;
    }
};
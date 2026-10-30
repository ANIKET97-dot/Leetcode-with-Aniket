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
    bool solve(TreeNode* root, long long min, long long max){
        if (root == nullptr){
            return true;
        }
        if (root-> val > min && root-> val < max){
        bool leftAns = solve(root-> left, min, root-> val);
        bool rightAns = solve(root-> right, root-> val, max);
        
        return leftAns && rightAns;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return solve(root, LONG_MIN, LONG_MAX);
    }
};
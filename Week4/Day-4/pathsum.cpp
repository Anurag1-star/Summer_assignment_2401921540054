
class Solution {
public:
    bool helper(TreeNode* root,int targetSum, int sum){
        if(root==NULL) return false;
        if(root->left==NULL && root->right==NULL){
            sum += root->val;
            if(sum==targetSum) return true;
        }
        bool leftt = helper(root->left,targetSum,sum+root->val);
        bool rightt =helper(root->right,targetSum,sum+root->val);
        return leftt||rightt;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        return helper(root,targetSum,0);
    }
};
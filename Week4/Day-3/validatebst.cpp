class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root==NULL) return true;
        if(root->left==NULL && root->right==NULL) return true;
        if(root->val<=root->left->val || root->val >= root->right->val) return false;
        if(root->left==NULL){
            return isValidBST(root->right);
        }
        else if(root->right==NULL){
            return isValidBST(root->left);
        }
        else{
            return isValidBST(root->left)&& isValidBST(root->right);
        }
    }
};
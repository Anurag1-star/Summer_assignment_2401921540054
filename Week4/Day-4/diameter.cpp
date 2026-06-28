
class Solution {
public:
    int ans = INT_MIN;
    int level(TreeNode* root){
        if(root==NULL ) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    int diameter(TreeNode* root){
        if(root==NULL ) return 0;
        return level(root->left) + level(root->right); 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int maxDia = diameter(root);
        ans = max(ans,maxDia);
        diameterOfBinaryTree(root->left); 
        diameterOfBinaryTree(root->right); 
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode* >q;
        q.push(root);
        while(q.size()>0){
            TreeNode* curr = q.front();
            if(curr==NULL){
                //push
                if(q.size()==0) break;
            }
            else{
                if(curr->left!=NULL){
                    q.push(curr->left);
                }
                if(curr->right!=NULL){
                    q.push(curr->right);
                }
            }
        }
    }
};
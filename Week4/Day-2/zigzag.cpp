class Solution {
public:
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1 + max(level(root->left),level(root->right));
    }
    void findtraversal(TreeNode* root,int target, int st,vector<int>&v){
        if(root==NULL){
            return ;
        }
        if(st==target){
            v.push_back(root->val);
        }
        findtraversal(root->left,target,st+1,v);
        findtraversal(root->right,target,st+1,v);
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int levels = level(root);
        vector<vector<int>>ans;
        vector<int>v;
        for(int i=0; i<levels;i++){
            findtraversal(root,i,0,v);
            if(i%2==0){
                 ans.push_back(v);
                 v.clear();
            }
            else{
                reverse(v.begin(),v.end());
                ans.push_back(v);
                v.clear();
            }
           
        }
        return ans;
        
    }
};
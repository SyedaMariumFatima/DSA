vector<vector<int>> ans;
queue<TreeNode*> q;
void levelOrder (TreeNode root) {
q.push(root);
while(q.size()>0){
TreeNode* curr=q.front();
q.pop();
cout<<curr->val<<" ";
if(root->left!=NULL) q.push(root->left);
if(root->right!=NULL) q.push(root->right);
};

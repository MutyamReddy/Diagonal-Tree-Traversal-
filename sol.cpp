vector<int> Solution::solve(TreeNode* a) {
   vector<int>ans;
   queue<TreeNode*>q;
   q.push(a);
   while(!q.empty()){
       TreeNode* temp=q.front();
       q.pop();
       while(temp!=NULL){
           ans.push_back(temp->val);
           if(temp->left!=NULL) q.push(temp->left);
           temp=temp->right;
       }
   }
    return ans;
}

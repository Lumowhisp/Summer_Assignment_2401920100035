class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> ans;
            if(root == NULL){
                return ans;
            }
            queue<TreeNode*> q;
            q.push(root);
            while(!q.empty()){
                int size = q.size();    
                vector<int> oneLevel;
                for(int i=0;i<size;i++){
                    TreeNode* current = q.front();
                    q.pop();
                    oneLevel.push_back(current->val);
                    if(current->left != NULL){
                        q.push(current->left);
                    }
                    if(current->right != NULL){
                        q.push(current->right);
                    }
                }
                ans.push_back(oneLevel);
            }
            return ans;
        }
    };
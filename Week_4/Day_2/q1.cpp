class Solution {
    public:
        void travel(TreeNode* root, vector<int>& ans){
            if(root == NULL){
                return;
            }
            travel(root->left, ans);
            ans.push_back(root->val);
            travel(root->right, ans);
        }
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> ans;
            travel(root, ans);
            return ans;
        }
    };
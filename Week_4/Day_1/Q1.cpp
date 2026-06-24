class Solution {
    public:
        int maxDepth(TreeNode* root) {
    
            if(root == NULL){
                return 0;
            }
    
            int leftAns = maxDepth(root->left);
            int rightAns = maxDepth(root->right);
    
            if(leftAns > rightAns){
                return leftAns + 1;
            }
    
            return rightAns + 1;
        }
    };
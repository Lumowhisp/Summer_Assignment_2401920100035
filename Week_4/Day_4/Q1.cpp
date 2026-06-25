
 class Solution {
    public:
    void helper(TreeNode* root,int targetSum,int sum,bool &pathExist){
      if(root == NULL){
        return;
      }
      sum+=root->val;
      //Leaf code have no children so both left and right are null
      if(root->left==NULL && root->right==NULL){
        if(targetSum==sum){
          pathExist=true;
        }
        return;
      }
      if(pathExist){
        return ;
      }
      helper(root->left,targetSum,sum,pathExist);
      helper(root->right,targetSum,sum,pathExist);
    }
        bool hasPathSum(TreeNode* root, int targetSum) {
          if(root==NULL){
            return false;
          }
          bool pathExist=false;
          helper(root,targetSum,0,pathExist);
          return pathExist;
            
        }
    };
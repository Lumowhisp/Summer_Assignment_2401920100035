class Codec {
    public:
    
        void makeString(TreeNode* root,string &ans){
    
            if(root==NULL){
                ans+="#,";
                return;
            }
    
            ans+=to_string(root->val);
            ans+=",";
    
            makeString(root->left,ans);
            makeString(root->right,ans);
        }
    
        string serialize(TreeNode* root) {
    
            string ans="";
            makeString(root,ans);
    
            return ans;
        }
    
        TreeNode* build(vector<string> &v,int &i){
    
            if(v[i]=="#"){
                i++;
                return NULL;
            }
    
            TreeNode* root=new TreeNode(stoi(v[i]));
            i++;
    
            root->left=build(v,i);
            root->right=build(v,i);
    
            return root;
        }
    
        TreeNode* deserialize(string data) {
    
            vector<string> v;
            string temp="";
    
            for(char ch:data){
    
                if(ch==','){
                    v.push_back(temp);
                    temp="";
                }
                else{
                    temp+=ch;
                }
            }
    
            int i=0;
    
            return build(v,i);
        }
    };
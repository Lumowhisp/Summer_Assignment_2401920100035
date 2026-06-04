class Solution {
    public:
    bool check(vector<vector<int>>& mat, int r, int c){
          int rowOrg=mat.size();
          int colOrg=mat[0].size();
          int eleOrg=rowOrg*colOrg;
          if(eleOrg==r*c){
              return true;
            }
          return false;  
    }
        vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
          if(check(mat,r,c)){
            int rowOrg=mat.size();
            int colOrg=mat[0].size();
            int idx=0;
            vector<vector<int>>ans(r,vector<int>(c));
            for(int i=0;i<rowOrg;i++){
              for(int j=0;j<colOrg;j++){
                ans[idx/c][idx%c]=mat[i][j];
                idx++;
              }
            }
            return ans;
          }
          return mat;
          
        }
    };
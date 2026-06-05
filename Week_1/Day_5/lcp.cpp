class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.size() == 1) {
                return strs[0];
            }
    
            string s1 = strs[0];
            string s2 = strs[1];
            string res = "";
            int minSize = min(s1.size(), s2.size());
            for (int i = 0; i < minSize; i++) {
                if (s1[i] == s2[i]) {
                    res += s1[i];
                }
                else{
                    break;
                }
            }
            for(int j=2;j<strs.size();j++){
                minSize=min(strs[j].size(),res.size());
                string temp="";
                for(int i=0;i<minSize;i++){
                    if(res[i]==strs[j][i]){
                        temp+=strs[j][i];  
                    }
                    else{
                        break;
                    }
                }
                if(temp.size()<res.size()){
                    res=temp;
                }
            }
            return res;
        }
    };
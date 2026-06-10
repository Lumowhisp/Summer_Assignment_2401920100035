class Solution {
    public:
        bool repeatedSubstringPattern(string s) {
            int i = 0;
            int length=1;
            while (length < s.size()) {
                if (s.size() % length == 0) {
                    int j;
                    for (j=length; j < s.size(); j+=length) {
                        if(s.substr(i,length)!=s.substr(j,length)){
                            break;
                        }
      
                    }
                    if(j>=s.size()){
                        return true;
                    }
                }
                length++;
            }
            return false;
        }
    };
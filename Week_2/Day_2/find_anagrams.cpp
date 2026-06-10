class Solution {
    public:
        vector<int> findAnagrams(string s, string p) {
    
            vector<int> ans;
    
            int n = p.size();
            int m = s.size();
    
            if(n > m) return ans;
    
            vector<int> freqP(26,0);
            vector<int> freqS(26,0);
    
            for(char ch : p) {
                freqP[ch - 'a']++;
            }
    
            int left = 0;
    
            for(int right = 0; right < m; right++) {
    
                freqS[s[right] - 'a']++;
    
                if(right - left + 1 > n) {
                    freqS[s[left] - 'a']--;
                    left++;
                }
    
                if(right - left + 1 == n) {
                    if(freqP == freqS) {
                        ans.push_back(left);
                    }
                }
            }
    
            return ans;
        }
    };
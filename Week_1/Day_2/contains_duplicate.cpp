class Solution {
    public:
    //Time Complexity : O(n)
    //Space Complexity :O(n)
        bool containsDuplicate(vector<int>& nums) {
          unordered_map<int,int>freq;
          for(auto x:nums){
            freq[x]++;
          }
          for(auto &it:freq){
            if(it.second>1){
              return true;
            }
          }
          return false;  
        }
    };
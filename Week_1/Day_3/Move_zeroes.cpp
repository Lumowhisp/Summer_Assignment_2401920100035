class Solution {
    public:
    //Time Complexity : 0(n)
    //Space Complexity : O(1);
        void moveZeroes(vector<int>& nums) {
            int i=0;
            for(int j=0;j<nums.size();j++){
              if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
              }
            }
        }
    };
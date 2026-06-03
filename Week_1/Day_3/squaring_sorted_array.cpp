class Solution {
    public:
    //TC:O(NLOGN)
    //nlogn+n : nlogn dominates 
    //Approach 1:
        vector<int> sortedSquares(vector<int>& nums) {
            for(int i=0;i<nums.size();i++){
              nums[i]*=nums[i];
            }
            sort(nums.begin(),nums.end());
            return nums;
        }
    };
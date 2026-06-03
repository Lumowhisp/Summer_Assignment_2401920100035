class Solution {
    public:
    //TC:O(NLOGN)
    //nlogn+n : nlogn dominates 
    //Approach 1:
        // vector<int> sortedSquares(vector<int>& nums) {
        //     for(int i=0;i<nums.size();i++){
        //       nums[i]*=nums[i];
        //     }
        //     sort(nums.begin(),nums.end());
        //     return nums;
        // }

    //Approach 2:
    //Using Two Pointer :
    
        vector<int> sortedSquares(vector<int>& nums) {
            int i=0;
            int j=nums.size()-1;
            int pos=nums.size()-1;
            vector<int>ans(nums.size());
            while(i<=j){
                if(abs(nums[i])<=abs(nums[j])){
                    ans[pos]=nums[j]*nums[j];
                    j--;
                }
                else{
                    ans[pos]=nums[i]*nums[i];
                    i++;
                }
                pos--;
            };
            return ans;
            }
    };

class Solution {
    public:
    //Time Complexity:O(n)
    //Space Complexity:O(1)
        double findMaxAverage(vector<int>& nums, int k) {
          int sum=0;
          int i=0;
          int j=i;
          for(j;j<k;j++){
            sum+=nums[j];
          }
          double maxAvg=sum/(double)k;
          while(j<nums.size()){
            sum-=nums[i];
            i++;
            sum+=nums[j];
            j++;
            maxAvg=max(maxAvg,sum/(double)k);
          }
          return maxAvg;  
        }
    };
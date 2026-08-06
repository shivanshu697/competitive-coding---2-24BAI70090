class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
      
        vector<int>ans(n);
        int low = 0;
        int high = n - 1;
        int i = n - 1;

        while (low <= high) {
            if (nums[low] * nums[low] > nums[high] * nums[high]) {
                ans[i] = nums[low] * nums[low];
                low++;
            } else {
                ans[i] = nums[high] * nums[high];
                high--;
            }
            i--;
        }

        return ans;}};
        
        
                
                
            
            
                
            
        
  
  

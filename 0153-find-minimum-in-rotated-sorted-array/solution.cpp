class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        int minx = INT_MAX;

        while (low <= high) {
            int mid = (low + high) / 2;
            if(nums[low]<=nums[high])
            {
                minx=min(minx,nums[low]);
                break;
                
            }

            
            if (nums[low] <= nums[mid]) {
                minx = min(minx, nums[low]);
                low = mid + 1;

            } else {

                 
                minx = min(minx, nums[mid]);
                high=mid-1;

               
            }
        }
        return minx;
    }
};

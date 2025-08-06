class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> temp;
        int n=nums.size();
        
        for( int j=0;j<n;j++)
        {
          if(nums[j]!=val)
          {
            temp.push_back(nums[j]);
          }
          nums=temp;

        }
        return size(nums) ;

        
    }
};

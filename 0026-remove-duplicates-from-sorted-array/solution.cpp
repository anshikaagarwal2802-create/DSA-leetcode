#include <iostream>
#include <cassert>
#include <vector>
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
         
        
        
        int i,j;
        i=0;
        if(nums.empty()) return 0;
        for(j=1;j <nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
              nums[i+1]=nums[j];
              i++;
            }
        }
        return(i+1);
    }
    int main()

    {
        Solution obj1;
        std::vector<int> nums={1,1,2};
        std::vector<int> expectedNums={1,2};
        

       int k =obj1. removeDuplicates(nums); 

        assert(k == expectedNums.size());
        for (int i = 0; i < k; i++) {
          assert (nums[i] == expectedNums[i]);

        }
        return 0;
    }
        
        



        
    
};

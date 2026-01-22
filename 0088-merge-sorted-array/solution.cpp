class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int left=0;
        int right=0;
        vector<int> nums3;
        int index=0;

        while(left<m && right<n)
        {
            if(nums1[left]<nums2[right])
            {
                nums3.push_back(nums1[left]);
                left++,index++;


            }
            else
            {
                nums3.push_back(nums2[right]);
                right++,index++;

            }

        }
        while(left<m)
        {
            nums3.push_back(nums1[left]);
            left++;

        }
        while(right<n)
        {
            nums3.push_back(nums2[right]);
            right++;

        }
        for(int i=0;i<n+m;i++)
        {
            
            
                nums1[i]=nums3[i];



            
        }
        
        
    }
};

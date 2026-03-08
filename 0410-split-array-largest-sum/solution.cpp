class Solution {
public:
    int countsubarray(vector<int>&nums,int sum)
    {
        int cntsubarray=1;
        long long lsum=0;
        for(int i=0;i<nums.size();i++)
        {
                if(lsum+nums[i]<=sum)
                {
                    lsum+=nums[i];

                }
                else
                {
                    cntsubarray++;
                    lsum=nums[i];

                }
        }
        return cntsubarray;


    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) return -1;
        int low= *max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high)
        {
            int mid=(low+high)/2;
            int subarray=countsubarray(nums,mid);
            if(subarray>k)
            {
                low=mid+1;

            }
            else
            {
                high=mid-1;

            }
        }
        return low;


        
    }
};

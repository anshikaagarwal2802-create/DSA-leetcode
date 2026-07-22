class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0,right,answer=1;
        long long windowsum=0;
        long long  operations;
        for(right=0;right<nums.size();right++)
        {
            windowsum+=nums[right];
            operations=(long long) nums[right] * (right-left+1)-windowsum;
            while(operations>k)
            {
            
                windowsum-=nums[left];
                left++;
                operations=(long long) nums[right] * (right-left+1)-windowsum;






            }
            answer=max(answer,right-left +1);



        }
        return answer ;



        
    }
};

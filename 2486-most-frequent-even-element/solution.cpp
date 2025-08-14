class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mpp;
        for(auto num:nums)
        {
            if(num%2==0)
            mpp[num]++;

        }
        int ans=-1;
        int maxcount =-1;
        for(auto it:mpp)
        {
            int value =it.first;
            int count =it.second ;
            if(count > maxcount || count ==maxcount && value<ans )
            {
                maxcount =count;
                ans=value;


            }
           
        }
         return ans ;
    }
};

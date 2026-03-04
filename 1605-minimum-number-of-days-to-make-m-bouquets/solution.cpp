class Solution {
public:
    bool possible(vector<int>& bloomDay,int day, int m, int k)
    {
        int cnt=0,noofB=0,n=bloomDay.size();
        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]<=day)
            cnt++;
            else
            {
                noofB+=(cnt/k);
                cnt=0;

            }
        }
        noofB+=(cnt/k);
        return (noofB>=m);


       

    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size() , mini=INT_MAX , maxi=INT_MIN,low,high,mid;
        long long val= m * 1LL* k;
        if(val >n)return -1;

        for(int i=0;i<n;i++)
        {
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);

        }
        low=mini;
        high=maxi;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(possible(bloomDay,mid,m,k))
            {
                high=mid-1;

            }
            else
            {
                low=mid+1;

            }
        }
        return low;





        
    }
};

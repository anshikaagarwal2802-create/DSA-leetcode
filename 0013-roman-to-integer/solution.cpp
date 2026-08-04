class Solution {
public:
    int romanToInt(string s) {
        int currentValue,nextValue,ans=0,n=s.size();
        unordered_map<char,int>mpp
        {
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        ans=0;
        for(int i=0;i<s.size();i++)
        {
            currentValue=mpp[s[i]];
            if(i<n-1)// check whether next character exists or not !!
            {
                nextValue=mpp[s[i+1]];
                if(currentValue <nextValue)
                {
                    ans-=currentValue;

                }
                else
                {
                    ans+=currentValue ;
                }
            }
            else
            {
                ans+=currentValue;
            }

        }
        return ans ;
        


        
    }
};

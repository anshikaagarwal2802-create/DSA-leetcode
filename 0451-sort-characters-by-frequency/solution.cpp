class Solution {
public:
    static bool cmp(pair<char,int> a, pair<char,int>b)
    {
        return a.second>b.second;


    }
    string frequencySort(string s) {
        
        unordered_map<char,int>mpp;
        vector< pair<char,int>>vec;
        string ans="";

        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;

        }
        for(auto it : mpp)
        {
            vec.push_back(it);

        }
        sort(vec.begin(),vec.end(),cmp);
        for(auto it:vec)
        {
            for(int i=0;i<it.second;i++)
            {
                ans+=it.first ;

            }
        }

        return ans ;



        
    }
    
};

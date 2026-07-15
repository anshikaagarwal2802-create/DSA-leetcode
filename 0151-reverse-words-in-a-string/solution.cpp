class Solution {
public:
    string reverseWords(string s) {
        
        string temp="";
        vector<string> words;

        for(int i=0;i<s.size();i++)
        {
             if(s[i]!=' ')
             {
                  temp+=s[i];

             }
             else
             {
                if(!temp.empty())
                {
                    words.push_back(temp);
                    temp="";

                }
            


             }
             
        

        }
    
    if(!temp.empty())
    {
        words.push_back(temp);


    }
    string ans ="";
    for(int i=words.size()-1;i>=0;i--)
    {
        ans+=words[i];
        if(i!=0)
        {
            ans+=" ";

        }
    }
    return ans ;





        
    }
};

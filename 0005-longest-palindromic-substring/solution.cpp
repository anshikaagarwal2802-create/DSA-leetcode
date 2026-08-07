class Solution {
public:
   
    string longestPalindrome(string s) {
        int n = s.size(), maxLen = 0,left,right,len;
        string ans = "";

        for (int i = 0; i < n; i++) {
            left=i;
            right=i; 
            
            while(left>=0 && right<n && s[left]==s[right])
            {
                     len=right-left+1;
                     if(len>maxLen)
                     {
                        maxLen=len;
                        ans=s.substr(left,len);

                     }
                     
                     left--;
                     right++;


                   

                  
            }
            
            left=i;
            right=i+1;
           
             while(left>=0 && right<n && s[left]==s[right])
             {
                len=right-left+1;
                if(len>maxLen)
                {
                    maxLen=len;
                    ans=s.substr(left,len);


                }
                left--;
                right++;

               
             }
            



            
            
           
        }
         return ans;
    }
};

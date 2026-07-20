class Solution {
public:
    bool isPalindrome(string s) {
        int left=0,right=s.size()-1;
        while(left<right)
        {
            if(!isAlphanumeric(s[left]))
            {
                left++;

            }
            else if(!isAlphanumeric(s[right]))
            {
                right--;

            }
            else
            {
                char leftchar=s[left];
                char rightchar=s[right];
                if(leftchar>='A'&& leftchar<='Z')
                {
                    leftchar=leftchar+32;

                }
                if(rightchar>='A'&& rightchar<='Z')
                {
                    rightchar=rightchar+32;

                }
                if(leftchar!=rightchar)
                {
                    return false;

                }
                left++;
                right--;



            }
        }
        return true ;
        

        
    }
    bool isAlphanumeric(char ch) {
        return (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' ||
                ch >= '0' && ch <= '9');
    }
};

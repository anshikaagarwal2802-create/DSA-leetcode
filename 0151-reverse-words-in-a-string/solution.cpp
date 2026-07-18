class Solution {
public:
    string reverseWords(string s) {
        int right = 0;                              // reading
        int left = 0;                               // writing
        while (right < s.size() && s[right] == ' ') // remove all leading spaces
        {
            right++;
        }
        while (right < s.size()) {
            if (s[right] != ' ') {
                s[left] = s[right];
                left++;

            } else {
                if (left > 0 &&
                    s[left - 1] != ' ') // as if left-> 0 then s[-1] is invalid
                {

                    s[left] = ' ';
                    left++;
                }
            }
            right++;
        }
        // removing trailing spaces
        if (s[left - 1] == ' ') {
            left--;
        }
        s.resize(left);
        reverse(s.begin(), s.end());
        int i = 0;
        while (i < s.size()) {
            int start = i;
            while (i < s.size() && s[i] != ' ') {
                i++;
            }
            int end = i - 1;
            while (start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            i++;

        }
        return s ;
    }
        
    };

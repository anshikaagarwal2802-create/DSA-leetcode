class Solution {
public:
    int myAtoi(string s) {

        long long num = 0;
        int sign = 1;
        int i = 0;
        int digit;

        // removing whitespace
        for (i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                continue;

            } else {
                break;
            }
        }
        // handling edge case
        if (i == s.size()) {
            return 0;
        }
        // detect sign
        if (s[i] == '-') {
            sign = -1;
            i++;

        } else if (s[i] == '+') {
            sign = 1;
            i++;
        } else {
            sign = 1;
        }

        // digit reading
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {

            digit = s[i] - '0';
            // to check if in range or not ..
            if ((sign==1)&&(num > INT_MAX / 10 || num == INT_MAX / 10 && digit > 7)) {
                return INT_MAX;
            }

            if ((sign==-1)&&(num > INT_MAX / 10|| num == INT_MAX / 10 && digit > 8)) {
                return INT_MIN;
            }
            
            num = num * 10 + digit; // building number (string to int)
            
            i++;
        }
        // at end of this loop we can say we got non digit char or end of string
        num=num*sign;
        return (int)num ;
    }
};

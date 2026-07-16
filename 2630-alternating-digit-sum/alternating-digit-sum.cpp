class Solution {
public:
    int alternateDigitSum(int n) {
        int ans = 0;
        int sign = 1;

        while (n > 0) {
            int digit = n % 10;
            ans += digit * sign;
            sign = -sign; 
            n /= 10;
        }

        return sign == 1 ? -ans : ans;
    }
};
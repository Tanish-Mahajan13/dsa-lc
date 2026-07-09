class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int temp = x;
        long ans = 0;
        for(x ; x>0 ; x/=10){
            ans = ans*10 + x%10;
        }
        return ans==temp;
    }
};
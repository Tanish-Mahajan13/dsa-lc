class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        int cnt[26] = {0};
       
        for (int i = 0; i < n / 2; i++) {
            cnt[s[i] - 'a']++;
        }
        
        string half = "";
        for (int c = 0; c < 26; c++) {
            half += string(cnt[c], 'a' + c);   
        }
        
        string result = half;
        if (n % 2 == 1) {
            result += s[n / 2];                
        }
        result += string(half.rbegin(), half.rend());
        
        return result;
    }
};
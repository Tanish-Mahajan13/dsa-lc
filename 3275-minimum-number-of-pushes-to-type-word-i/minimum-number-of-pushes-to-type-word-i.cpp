class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            // i / 8 determines the press cost:
            // i = 0..7   -> (0 + 1) = 1 push
            // i = 8..15  -> (1 + 1) = 2 pushes
            // i = 16..23 -> (2 + 1) = 3 pushes
            // i = 24..25 -> (3 + 1) = 4 pushes
            ans += (i / 8) + 1;
        }
        
        return ans;
    }
};
#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    int maximumProduct(std::vector<int>& nums) {
        int m1 = INT_MIN, m2 = INT_MIN, m3 = INT_MIN;
        int l1 = INT_MAX, l2 = INT_MAX;

        for (int num : nums) {
            if (num > m1) {
                m3 = m2;
                m2 = m1;
                m1 = num;
            } else if (num > m2) {
                m3 = m2;
                m2 = num;
            } else if (num > m3) {
                m3 = num;
            }

            if (num < l1) {
                l2 = l1;
                l1 = num;
            } else if (num < l2) {
                l2 = num;
            }
        }

        return max(m1 * m2 * m3, l1 * l2 * m1);
    }
};
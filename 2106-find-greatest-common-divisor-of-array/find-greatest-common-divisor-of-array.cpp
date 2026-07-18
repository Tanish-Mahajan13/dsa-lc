class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a = nums[0];
        int b = nums[nums.size()-1];
        int x = gcd(a,b);
        return x;
    }
};
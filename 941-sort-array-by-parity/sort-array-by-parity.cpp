class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int e = 0;
        int o = n - 1;
        int c =0;
        while(e<=o){
            if(nums[c]%2==0){
                c++;
                e++;
            }
            else{
                swap(nums[e],nums[o]);
                o--;
            }
        }
        return nums;
    }
};
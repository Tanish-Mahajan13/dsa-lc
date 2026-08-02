class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int s=0;
        int e=nums.size()-1;
        if(nums.empty()) return 0;
        while(s<=e){
            if(nums[s]==val){
                swap(nums[s],nums[e]);
                e--;
            }
            else{
                s++;
            }
        }

        return s;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() -1;
        while(i<j){
            if(target == nums[i]+nums[j]){
                break;
            }
            else if(target>nums[i]+nums[j]){
                i++;
            }
            else{
                j--;
            }
        }
        vector <int> v;
        v.push_back(i+1);
        v.push_back(j+1);
        return v;
    }
};
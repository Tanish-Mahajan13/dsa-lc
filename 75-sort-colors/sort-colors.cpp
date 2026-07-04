class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c=0;
        int z=0;
        int t=nums.size()-1;
        while(c<=t){
            if(nums[c]==0){
                swap(nums[c],nums[z]);
                c++;
                z++;
            }
            else if(nums[c]==1){
                c++;
            }
            else{
                swap(nums[c],nums[t]);
                
                t--;
            }
        }
    }
};
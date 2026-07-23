class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int rows = accounts.size();
        int col = accounts[0].size();
        int ans=0;
        for(int i = 0;i<rows;i++){
            int temp = 0;
            for(int j = 0 ;j<col ;j++){
                temp+=accounts[i][j];
            }
            ans = max(ans,temp);
        }
        return ans;
    }
};
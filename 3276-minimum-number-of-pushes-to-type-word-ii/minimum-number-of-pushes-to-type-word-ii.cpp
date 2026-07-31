class Solution {
public:
    int minimumPushes(string word) {
        vector <int> arr(26,0);
        for (char c : word) {
            arr[c - 'a']++;
        }
        sort(arr.rbegin(),arr.rend());
        int ans=0;
        for(int i=0; i<26 ;i++){
            int temp = (i/8)+1;
            ans+=arr[i]*temp;
        }
        return ans;
    }
};
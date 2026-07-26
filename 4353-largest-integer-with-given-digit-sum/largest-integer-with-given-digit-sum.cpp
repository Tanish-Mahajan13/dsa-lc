class Solution {
public:
    int largestInteger(int n, int s) {
        if(s > (n*9)) return -1;
        int ans = 0;
        while(s>0){
            if(s>=9){
                ans = (ans*10)+9;
                s-=9;
                n-=1;
            }
            else{
                ans=(ans*10)+s;
                s=s-s;
                n-=1;
            }
        }
        while(n>0){
            ans*=10;
            n-=1;
        }
        return ans;
    }
};
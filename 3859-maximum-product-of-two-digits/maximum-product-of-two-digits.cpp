class Solution {
public:
    int maxProduct(int n) {
        int m1 = 0;
        int m2 =0;

        while(n>0){
            int temp = n%10;
            if(temp>m1){
                if(m1>=m2){
                    m2=m1;
                }
                m1=temp;
            }
            else if(temp>m2){
                m2=temp;
            }
            n = n/10;
        }
        return m1*m2;
    }
};
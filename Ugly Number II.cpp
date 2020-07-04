class Solution {
public:
    int nthUglyNumber(int num) {
        if(num == 0 || num == 1){
            return num;
        }
        long int ugly[num];
        long int i2 = 0, i3 = 0, i5 = 0;
        long int m2 = 2,m3 = 3, m5 = 5;
        ugly[0] = 1;
        long int nxt = 0;
        for(int i=1;i<num;i++){
            nxt = min(m2, min(m3,m5));
            ugly[i] = nxt;
            if(nxt == m2){
                i2+=1;
                m2 = ugly[i2]*2;
            }
            if(nxt == m3){
                i3++;
                m3 = ugly[i3]*3;
            }
            if(nxt == m5){
                i5++;
                m5 = ugly[i5]*5;
            }
        }
        return nxt;  
    }
};
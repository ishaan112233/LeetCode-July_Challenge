class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        long long  ref = n;
        if(ref < 0){
            ref = (-1) * ref;
        }
        
        while(ref){
            if(ref&1){
                res = res * x;
            }
            x = x * x;
            ref >>= 1;
        }
        return (n < 0)?(1/res):res;
    }
};
class Solution {
public:
    int hammingDistance(int x, int y) {
        int countBits = 0;
        int no = x^y;
        while(no > 0){
            countBits += no&1;
            no>>=1;
        }
        return countBits;
    }
};
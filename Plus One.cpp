class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.empty()){
            return digits;
        }
        int carry = 1;
        int size = digits.size();
        int sum = 0;
        for(int i = size-1;i>=0;i--){
            if(carry){
                sum = digits[i]+1;
                carry = (sum>=10)?1:0;
                digits[i] = sum%10;
            }
        }
        if(carry==1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int s1 = a.length()-1;
        int s2 = b.length()-1;
        int carry = 0;
        int sum;
        while(s1>=0 || s2>=0 || carry==1){
            carry += ((s1 >=0 )? a[s1]-'0':0);
            carry += ((s2 >=0 )? b[s2]-'0':0);
            
            ans = char(carry%2 + '0')+ans;
            carry = carry/2;
            s1--;s2--;
        }
        return ans;
        
    }
};
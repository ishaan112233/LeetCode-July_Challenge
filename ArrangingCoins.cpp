/* 

 The Following Solution is Based on BinarySearch and
 having time complexity of O(LogN) and Space Complexity as O(1)

*/

class Solution {
public:
    int arrangeCoins(int n) {
        if(n <= 1){
            return n;
        }        
        long int ans = -1; 
        long int left = 0, right = n;
        while(left<=right){
            long int mid = left + (right - left)/2;
            long long c = (mid + 1) * mid / 2; 
            if(c <= n){
                ans = mid;
                left = mid  + 1;
            }
            else{
                right = mid -1;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        if(nums.empty()){
            return v;
        }
        sort(nums.begin(), nums.end());
        vector<int>ans;
        int start, end;
        int n = nums.size();
        int k = 0;
        for(int i=0;i<n-1;i++){
            start = i+1;
            end = n-1;
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            while(start<end){
                if(nums[i] + nums[start] + nums[end] == 0){
                    ans = {nums[i], nums[start], nums[end]};
                    v.emplace_back(ans);
                    //For Duplicates
                    while(start < end && nums[start] == nums[start+1]){
                        start++;
                    }
                    while(start < end && nums[end] == nums[end-1]){
                        end--;
                    }
                    start++;
                    end--;
                }
                else if(nums[i] + nums[start] + nums[end] > 0){
                    end--;
                }else{
                    start++;
                }
            }
            
        }
        return v;
    }
};
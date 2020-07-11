class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.empty()){
            return {};
        }
        int n = nums.size();
        int p = 1<<n;
        vector<vector<int>>sub(p);
        for(int i=0;i<p;i++){
            for(int j=0;j<n;j++){
                if((i >> j) & 1){
                    sub[i].emplace_back(nums[j]);
                }
            }
        }
        return sub;
    }
}; 
